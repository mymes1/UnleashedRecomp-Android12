#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83164240"))) PPC_WEAK_FUNC(sub_83164240);
PPC_FUNC_IMPL(__imp__sub_83164240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83164260:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,-3968
	ctx.r8.s64 = ctx.r8.s64 + -3968;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83164260
	if (!cr0.eq) goto loc_83164260;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831643C8"))) PPC_WEAK_FUNC(sub_831643C8);
PPC_FUNC_IMPL(__imp__sub_831643C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_831643E8:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,-3712
	ctx.r8.s64 = ctx.r8.s64 + -3712;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x831643e8
	if (!cr0.eq) goto loc_831643E8;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164550"))) PPC_WEAK_FUNC(sub_83164550);
PPC_FUNC_IMPL(__imp__sub_83164550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83164570:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,-3968
	ctx.r8.s64 = ctx.r8.s64 + -3968;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83164570
	if (!cr0.eq) goto loc_83164570;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831646D8"))) PPC_WEAK_FUNC(sub_831646D8);
PPC_FUNC_IMPL(__imp__sub_831646D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_831646F8:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,-3712
	ctx.r8.s64 = ctx.r8.s64 + -3712;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x831646f8
	if (!cr0.eq) goto loc_831646F8;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164860"))) PPC_WEAK_FUNC(sub_83164860);
PPC_FUNC_IMPL(__imp__sub_83164860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83164880:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,-3968
	ctx.r8.s64 = ctx.r8.s64 + -3968;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83164880
	if (!cr0.eq) goto loc_83164880;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831649E8"))) PPC_WEAK_FUNC(sub_831649E8);
PPC_FUNC_IMPL(__imp__sub_831649E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83164A08:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,-3712
	ctx.r8.s64 = ctx.r8.s64 + -3712;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83164a08
	if (!cr0.eq) goto loc_83164A08;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164B70"))) PPC_WEAK_FUNC(sub_83164B70);
PPC_FUNC_IMPL(__imp__sub_83164B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83164B90:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,-3968
	ctx.r8.s64 = ctx.r8.s64 + -3968;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83164b90
	if (!cr0.eq) goto loc_83164B90;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164CF8"))) PPC_WEAK_FUNC(sub_83164CF8);
PPC_FUNC_IMPL(__imp__sub_83164CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83164D18:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,-3712
	ctx.r8.s64 = ctx.r8.s64 + -3712;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83164d18
	if (!cr0.eq) goto loc_83164D18;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164E80"))) PPC_WEAK_FUNC(sub_83164E80);
PPC_FUNC_IMPL(__imp__sub_83164E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83164EA0:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,-3968
	ctx.r8.s64 = ctx.r8.s64 + -3968;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83164ea0
	if (!cr0.eq) goto loc_83164EA0;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165008"))) PPC_WEAK_FUNC(sub_83165008);
PPC_FUNC_IMPL(__imp__sub_83165008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83165028:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,-3712
	ctx.r8.s64 = ctx.r7.s64 + -3712;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,-3712(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -3712);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83165028
	if (!cr0.eq) goto loc_83165028;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165190"))) PPC_WEAK_FUNC(sub_83165190);
PPC_FUNC_IMPL(__imp__sub_83165190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r6,-31941
	ctx.r6.s64 = -2093285376;
	// lwz r11,-30540(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -30540);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// li r10,2048
	ctx.r10.s64 = 2048;
	// lwz r8,-30576(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -30576);
	// addi r9,r8,31
	ctx.r9.s64 = ctx.r8.s64 + 31;
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r9,-30548(r7)
	PPC_STORE_U32(ctx.r7.u32 + -30548, ctx.r9.u32);
	// addi r11,r9,2048
	r11.s64 = ctx.r9.s64 + 2048;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_831651C4:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// bge 0x831651c4
	if (!cr0.lt) goto loc_831651C4;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lwz r11,-30548(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -30548);
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lfs f0,29232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29232);
	f0.f64 = double(temp.f32);
loc_831651EC:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,-8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,-4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * f0.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * f0.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne 0x831651ec
	if (!cr0.eq) goto loc_831651EC;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// li r10,8192
	ctx.r10.s64 = 8192;
	// lwz r8,-30572(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -30572);
	// addi r5,r8,31
	ctx.r5.s64 = ctx.r8.s64 + 31;
	// rlwinm r9,r5,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r9,-30552(r7)
	PPC_STORE_U32(ctx.r7.u32 + -30552, ctx.r9.u32);
	// addi r11,r9,8192
	r11.s64 = ctx.r9.s64 + 8192;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_8316527C:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// bge 0x8316527c
	if (!cr0.lt) goto loc_8316527C;
	// li r11,1
	r11.s64 = 1;
	// stw r11,-30540(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30540, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831652A0"))) PPC_WEAK_FUNC(sub_831652A0);
PPC_FUNC_IMPL(__imp__sub_831652A0) {
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
	// addi r11,r5,1
	r11.s64 = ctx.r5.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r11,r29,r31
	r11.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r9,r11,-64
	ctx.r9.s64 = r11.s64 + -64;
	// clrlwi r11,r9,22
	r11.u64 = ctx.r9.u32 & 0x3FF;
	// stwx r11,r29,r31
	PPC_STORE_U32(r29.u32 + r31.u32, r11.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bne cr6,0x83165344
	if (!cr6.eq) goto loc_83165344;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83165344
	if (!cr6.eq) goto loc_83165344;
	// rlwinm r30,r5,10,0,21
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
	// bl 0x83163238
	sub_83163238(ctx, base);
	// lwzx r11,r29,r31
	r11.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// srawi r9,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = r11.s32 >> 6;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r8,r10,27160
	ctx.r8.s64 = ctx.r10.s64 + 27160;
	// addi r6,r11,5
	ctx.r6.s64 = r11.s64 + 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// lwzx r11,r7,r8
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83165344:
	// b 0x83165344
	goto loc_83165344;
}

__attribute__((alias("__imp__sub_83165348"))) PPC_WEAK_FUNC(sub_83165348);
PPC_FUNC_IMPL(__imp__sub_83165348) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165350"))) PPC_WEAK_FUNC(sub_83165350);
PPC_FUNC_IMPL(__imp__sub_83165350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r4,843(r11)
	PPC_STORE_U8(r11.u32 + 843, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165360"))) PPC_WEAK_FUNC(sub_83165360);
PPC_FUNC_IMPL(__imp__sub_83165360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subfic r9,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r9.s64 = 32 - r11.s64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addze r29,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	r29.s64 = temp.s64;
	// bge cr6,0x83165444
	if (!cr6.lt) goto loc_83165444;
	// ld r11,28(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 28);
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83165414
	if (cr6.eq) goto loc_83165414;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x831653bc
	if (!cr6.gt) goto loc_831653BC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_831653BC:
	// subf. r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bne 0x831653d0
	if (!cr0.eq) goto loc_831653D0;
	// li r11,0
	r11.s64 = 0;
	// b 0x831653d8
	goto loc_831653D8;
loc_831653D0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_831653D8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83165414:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
loc_83165444:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83165454
	if (cr6.lt) goto loc_83165454;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_83165454:
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// bne cr6,0x831654b8
	if (!cr6.eq) goto loc_831654B8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,-3
	ctx.r9.s64 = r11.s64 + -3;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// or r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// or r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_831654B8:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x8316550c
	if (!cr6.eq) goto loc_8316550C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,-2
	ctx.r9.s64 = r11.s64 + -2;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r3,1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// or r11,r6,r4
	r11.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8316550C:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x83165550
	if (!cr6.eq) goto loc_83165550;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// or r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stw r5,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83165550:
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// bne cr6,0x831655bc
	if (!cr6.eq) goto loc_831655BC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// or r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | r11.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_831655BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831655C8"))) PPC_WEAK_FUNC(sub_831655C8);
PPC_FUNC_IMPL(__imp__sub_831655C8) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x831655f4
	if (!cr6.lt) goto loc_831655F4;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_831655F4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bgt cr6,0x83165608
	if (cr6.gt) goto loc_83165608;
	// li r3,1
	ctx.r3.s64 = 1;
loc_83165608:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165620"))) PPC_WEAK_FUNC(sub_83165620);
PPC_FUNC_IMPL(__imp__sub_83165620) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8316564c
	if (!cr6.lt) goto loc_8316564C;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_8316564C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x83165674
	if (!cr6.gt) goto loc_83165674;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// b 0x831656a4
	goto loc_831656A4;
loc_83165674:
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,29096
	ctx.r7.s64 = ctx.r10.s64 + 29096;
	// subf r6,r30,r11
	ctx.r6.s64 = r11.s64 - r30.s64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// sraw r5,r9,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r5.s64 = ctx.r9.s32 >> temp.u32;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_831656A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831656C0"))) PPC_WEAK_FUNC(sub_831656C0);
PPC_FUNC_IMPL(__imp__sub_831656C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831656e8
	if (cr6.eq) goto loc_831656E8;
	// subfic r4,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r4.s64 = 8 - r11.s64;
	// bl 0x83165620
	sub_83165620(ctx, base);
loc_831656E8:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// lis r11,-32767
	r11.s64 = -2147418112;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// ori r28,r11,12
	r28.u64 = r11.u64 | 12;
loc_83165704:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8316573c
	if (!cr6.eq) goto loc_8316573C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316573c
	if (!cr6.eq) goto loc_8316573C;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831657cc
	if (cr6.eq) goto loc_831657CC;
loc_8316573C:
	// clrlwi r11,r30,20
	r11.u64 = r30.u32 & 0xFFF;
	// cmplwi cr6,r11,4095
	cr6.compare<uint32_t>(r11.u32, 4095, xer);
	// beq cr6,0x831657b4
	if (cr6.eq) goto loc_831657B4;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x831657c0
	if (cr6.eq) goto loc_831657C0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x83165768
	if (!cr6.lt) goto loc_83165768;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_83165768:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x83165790
	if (!cr6.lt) goto loc_83165790;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// or r30,r10,r30
	r30.u64 = ctx.r10.u64 | r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x83165704
	goto loc_83165704;
loc_83165790:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// sraw r8,r10,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// clrlwi r10,r8,28
	ctx.r10.u64 = ctx.r8.u32 & 0xF;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// or r30,r10,r30
	r30.u64 = ctx.r10.u64 | r30.u64;
	// b 0x83165704
	goto loc_83165704;
loc_831657B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_831657C0:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_831657CC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831657D8"))) PPC_WEAK_FUNC(sub_831657D8);
PPC_FUNC_IMPL(__imp__sub_831657D8) {
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
	// addi r11,r31,7
	r11.s64 = r31.s64 + 7;
	// li r5,3020
	ctx.r5.s64 = 3020;
	// rlwinm r30,r11,0,0,28
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r10,r30,3027
	ctx.r10.s64 = r30.s64 + 3027;
	// rlwinm r30,r10,0,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r30,4124
	ctx.r9.s64 = r30.s64 + 4124;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// bge cr6,0x83165824
	if (!cr6.lt) goto loc_83165824;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83165824:
	// li r5,4124
	ctx.r5.s64 = 4124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// li r11,64
	r11.s64 = 64;
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r6,r31,35
	ctx.r6.s64 = r31.s64 + 35;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r5,r6,0,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r4,-31941
	ctx.r4.s64 = -2093285376;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-30548(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30548);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r11,-30552(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -30552);
	// stb r9,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r9.u8);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r30,852(r31)
	PPC_STORE_U32(r31.u32 + 852, r30.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r10,904(r31)
	PPC_STORE_U32(r31.u32 + 904, ctx.r10.u32);
	// stw r10,908(r31)
	PPC_STORE_U32(r31.u32 + 908, ctx.r10.u32);
	// lwz r11,-30560(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30560);
	// stb r6,843(r31)
	PPC_STORE_U8(r31.u32 + 843, ctx.r6.u8);
	// stb r9,840(r31)
	PPC_STORE_U8(r31.u32 + 840, ctx.r9.u8);
	// stw r11,836(r31)
	PPC_STORE_U32(r31.u32 + 836, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831658A0"))) PPC_WEAK_FUNC(sub_831658A0);
PPC_FUNC_IMPL(__imp__sub_831658A0) {
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
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 852);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831658d4
	if (cr6.eq) goto loc_831658D4;
	// li r11,0
	r11.s64 = 0;
	// li r5,4116
	ctx.r5.s64 = 4116;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,852(r31)
	PPC_STORE_U32(r31.u32 + 852, r11.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_831658D4:
	// li r5,3020
	ctx.r5.s64 = 3020;
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

__attribute__((alias("__imp__sub_831658F8"))) PPC_WEAK_FUNC(sub_831658F8);
PPC_FUNC_IMPL(__imp__sub_831658F8) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,856
	ctx.r3.s64 = r31.s64 + 856;
	// lwz r30,852(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 852);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = r31.s64 + 904;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,964
	ctx.r3.s64 = r31.s64 + 964;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1220
	ctx.r3.s64 = r31.s64 + 1220;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,768
	ctx.r5.s64 = 768;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1476
	ctx.r3.s64 = r31.s64 + 1476;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,768
	ctx.r5.s64 = 768;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,768
	ctx.r5.s64 = 768;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2244
	ctx.r3.s64 = r31.s64 + 2244;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 852);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r11,841(r31)
	PPC_STORE_U8(r31.u32 + 841, r11.u8);
	// stw r11,844(r31)
	PPC_STORE_U32(r31.u32 + 844, r11.u32);
	// beq cr6,0x831659ec
	if (cr6.eq) goto loc_831659EC;
	// li r5,4116
	ctx.r5.s64 = 4116;
	// stw r11,852(r31)
	PPC_STORE_U32(r31.u32 + 852, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,4124
	ctx.r5.s64 = 4124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,64
	r11.s64 = 64;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,-30548(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30548);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r11,-30552(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30552);
	// stb r8,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r8.u8);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r30,852(r31)
	PPC_STORE_U32(r31.u32 + 852, r30.u32);
loc_831659EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165A08"))) PPC_WEAK_FUNC(sub_83165A08);
PPC_FUNC_IMPL(__imp__sub_83165A08) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,848(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// addi r27,r3,904
	r27.s64 = ctx.r3.s64 + 904;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83165b5c
	if (cr6.eq) goto loc_83165B5C;
	// li r26,0
	r26.s64 = 0;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83165A38:
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x83165a38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83165A38;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r30,r11,-30528
	r30.s64 = r11.s64 + -30528;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_83165A50:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r3.u8);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x83165a50
	if (!cr6.eq) goto loc_83165A50;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// mr r11,r26
	r11.u64 = r26.u64;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// bne cr6,0x83165a9c
	if (!cr6.eq) goto loc_83165A9C;
	// lbz r11,3(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// rlwimi r11,r10,8,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
loc_83165A9C:
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x83165ac8
	if (cr6.eq) goto loc_83165AC8;
loc_83165AAC:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r3.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x83165aac
	if (!cr6.eq) goto loc_83165AAC;
loc_83165AC8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x83162e10
	sub_83162E10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83165b5c
	if (cr6.lt) goto loc_83165B5C;
	// lbz r10,99(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// addi r9,r27,28
	ctx.r9.s64 = r27.s64 + 28;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r1,132
	r11.s64 = ctx.r1.s64 + 132;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r6,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r6.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r8,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r8.u32);
	// stw r7,12(r27)
	PPC_STORE_U32(r27.u32 + 12, ctx.r7.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83165B14:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x83165b14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83165B14;
	// addi r10,r27,40
	ctx.r10.s64 = r27.s64 + 40;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83165B38:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x83165b38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83165B38;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r26,52(r27)
	PPC_STORE_U32(r27.u32 + 52, r26.u32);
	// stw r26,56(r27)
	PPC_STORE_U32(r27.u32 + 56, r26.u32);
loc_83165B5C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83165B68"))) PPC_WEAK_FUNC(sub_83165B68);
PPC_FUNC_IMPL(__imp__sub_83165B68) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// subfic r11,r3,4
	xer.ca = ctx.r3.u32 <= 4;
	r11.s64 = 4 - ctx.r3.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bne cr6,0x83165c68
	if (!cr6.eq) goto loc_83165C68;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83165c6c
	if (cr6.eq) goto loc_83165C6C;
loc_83165C68:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83165C6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165C88"))) PPC_WEAK_FUNC(sub_83165C88);
PPC_FUNC_IMPL(__imp__sub_83165C88) {
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
	// lwz r27,20(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r19,16(r4)
	r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r18,4(r4)
	r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// lwz r22,24(r4)
	r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// addi r23,r11,29096
	r23.s64 = r11.s64 + 29096;
	// ble cr6,0x83165d60
	if (!cr6.gt) goto loc_83165D60;
	// mr r25,r20
	r25.u64 = r20.u64;
	// addi r26,r22,4
	r26.s64 = r22.s64 + 4;
	// mr r24,r27
	r24.u64 = r27.u64;
loc_83165CCC:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// ble cr6,0x83165d50
	if (!cr6.gt) goto loc_83165D50;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_83165CDC:
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x83165cf4
	if (!cr6.lt) goto loc_83165CF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_83165CF4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x83165d18
	if (!cr6.gt) goto loc_83165D18;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// stw r21,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r21.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x83165d40
	goto loc_83165D40;
loc_83165D18:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r8,r30,r11
	ctx.r8.s64 = r11.s64 - r30.s64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// lwzx r6,r10,r23
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + r11.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// and r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 & ctx.r6.u64;
	// stw r5,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r5.u32);
loc_83165D40:
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,128
	r28.s64 = r28.s64 + 128;
	// bne 0x83165cdc
	if (!cr0.eq) goto loc_83165CDC;
loc_83165D50:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// addi r26,r26,384
	r26.s64 = r26.s64 + 384;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// bne 0x83165ccc
	if (!cr0.eq) goto loc_83165CCC;
loc_83165D60:
	// cmpw cr6,r27,r19
	cr6.compare<int32_t>(r27.s32, r19.s32, xer);
	// bge cr6,0x83165e04
	if (!cr6.lt) goto loc_83165E04;
	// rlwinm r11,r27,1,0,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// add r29,r10,r20
	r29.u64 = ctx.r10.u64 + r20.u64;
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// subf r27,r27,r19
	r27.s64 = r19.s64 - r27.s64;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
loc_83165D88:
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x83165da0
	if (!cr6.lt) goto loc_83165DA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_83165DA0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// ble cr6,0x83165dc4
	if (!cr6.gt) goto loc_83165DC4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r11,r21
	r11.u64 = r21.u64;
	// stw r21,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r21.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// b 0x83165dec
	goto loc_83165DEC;
loc_83165DC4:
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r7,r30,r10
	ctx.r7.s64 = ctx.r10.s64 - r30.s64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// sraw r6,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// lwzx r5,r9,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r23.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// and r11,r6,r5
	r11.u64 = ctx.r6.u64 & ctx.r5.u64;
	// stw r4,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r4.u32);
loc_83165DEC:
	// stw r11,128(r29)
	PPC_STORE_U32(r29.u32 + 128, r11.u32);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r28,r28,384
	r28.s64 = r28.s64 + 384;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x83165d88
	if (!cr0.eq) goto loc_83165D88;
loc_83165E04:
	// cmpwi cr6,r19,32
	cr6.compare<int32_t>(r19.s32, 32, xer);
	// bge cr6,0x83165e44
	if (!cr6.lt) goto loc_83165E44;
	// rlwinm r11,r19,2,0,29
	r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r19,32
	xer.ca = r19.u32 <= 32;
	ctx.r8.s64 = 32 - r19.s64;
	// add r9,r11,r20
	ctx.r9.u64 = r11.u64 + r20.u64;
loc_83165E18:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// ble cr6,0x83165e38
	if (!cr6.gt) goto loc_83165E38;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r18
	r11.u64 = r18.u64;
loc_83165E28:
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r21.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bne 0x83165e28
	if (!cr0.eq) goto loc_83165E28;
loc_83165E38:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83165e18
	if (!cr0.eq) goto loc_83165E18;
loc_83165E44:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_83165E50"))) PPC_WEAK_FUNC(sub_83165E50);
PPC_FUNC_IMPL(__imp__sub_83165E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// lwz r20,16(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r18,4(r30)
	r18.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83165e98
	if (cr6.eq) goto loc_83165E98;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// stw r3,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r3.u32);
	// b 0x83165e9c
	goto loc_83165E9C;
loc_83165E98:
	// stw r26,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r26.u32);
loc_83165E9C:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r20,1
	cr6.compare<int32_t>(r20.s32, 1, xer);
	// addi r11,r11,26
	r11.s64 = r11.s64 + 26;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r10,r30
	r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + r30.u32);
	// ble cr6,0x83165ef8
	if (!cr6.gt) goto loc_83165EF8;
	// addi r30,r22,4
	r30.s64 = r22.s64 + 4;
	// subf r27,r22,r19
	r27.s64 = r19.s64 - r22.s64;
	// addi r29,r20,-1
	r29.s64 = r20.s64 + -1;
loc_83165EC0:
	// lwzx r11,r27,r30
	r11.u64 = PPC_LOAD_U32(r27.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83165ee4
	if (cr6.eq) goto loc_83165EE4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// clrlwi r11,r28,30
	r11.u64 = r28.u32 & 0x3;
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ r11.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_83165EE4:
	// extsh r11,r28
	r11.s64 = r28.s16;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// srawi r28,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r28.s64 = r11.s32 >> 2;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83165ec0
	if (!cr0.eq) goto loc_83165EC0;
loc_83165EF8:
	// cmpwi cr6,r20,32
	cr6.compare<int32_t>(r20.s32, 32, xer);
	// bge cr6,0x83165f38
	if (!cr6.lt) goto loc_83165F38;
	// rlwinm r11,r20,2,0,29
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r20,32
	xer.ca = r20.u32 <= 32;
	ctx.r8.s64 = 32 - r20.s64;
	// add r9,r11,r22
	ctx.r9.u64 = r11.u64 + r22.u64;
loc_83165F0C:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// ble cr6,0x83165f2c
	if (!cr6.gt) goto loc_83165F2C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r18
	r11.u64 = r18.u64;
loc_83165F1C:
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r26.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bne 0x83165f1c
	if (!cr0.eq) goto loc_83165F1C;
loc_83165F2C:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83165f0c
	if (!cr0.eq) goto loc_83165F0C;
loc_83165F38:
	// li r23,63
	r23.s64 = 63;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// ble cr6,0x831662c0
	if (!cr6.gt) goto loc_831662C0;
	// mr r27,r22
	r27.u64 = r22.u64;
	// addi r25,r17,128
	r25.s64 = r17.s64 + 128;
	// mr r21,r20
	r21.u64 = r20.u64;
loc_83165F50:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// ble cr6,0x831662b0
	if (!cr6.gt) goto loc_831662B0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// subf r24,r22,r19
	r24.s64 = r19.s64 - r22.s64;
	// mr r28,r18
	r28.u64 = r18.u64;
loc_83165F68:
	// lwzx r11,r24,r29
	r11.u64 = PPC_LOAD_U32(r24.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83166294
	if (cr6.eq) goto loc_83166294;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x831662a0
	if (cr6.gt) goto loc_831662A0;
	// lis r12,-31978
	r12.s64 = -2095710208;
	// addi r12,r12,24472
	r12.s64 = r12.s64 + 24472;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83165FA8;
	case 1:
		goto loc_831660BC;
	case 2:
		goto loc_83166220;
	case 3:
		goto loc_83166158;
	default:
		__builtin_unreachable();
	}
	// lwz r24,24488(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 24488);
	// lwz r24,24764(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 24764);
	// lwz r24,25120(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 25120);
	// lwz r24,24920(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 24920);
loc_83165FA8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x83165fbc
	if (!cr6.lt) goto loc_83165FBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_83165FBC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x83165fe0
	if (!cr6.lt) goto loc_83165FE0;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x83166000
	goto loc_83166000;
loc_83165FE0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-6
	r11.s64 = r11.s64 + -6;
	// sraw r9,r10,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// clrlwi r10,r9,26
	ctx.r10.u64 = ctx.r9.u32 & 0x3F;
	// addi r8,r11,6
	ctx.r8.s64 = r11.s64 + 6;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
loc_83166000:
	// stw r10,-128(r30)
	PPC_STORE_U32(r30.u32 + -128, ctx.r10.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x83166018
	if (!cr6.lt) goto loc_83166018;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_83166018:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x8316603c
	if (!cr6.lt) goto loc_8316603C;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x83166058
	goto loc_83166058;
loc_8316603C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-6
	r11.s64 = r11.s64 + -6;
	// addi r7,r9,6
	ctx.r7.s64 = ctx.r9.s64 + 6;
	// sraw r8,r10,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// clrlwi r10,r8,26
	ctx.r10.u64 = ctx.r8.u32 & 0x3F;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
loc_83166058:
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x83166070
	if (!cr6.lt) goto loc_83166070;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_83166070:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x83166098
	if (!cr6.lt) goto loc_83166098;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// b 0x831662a0
	goto loc_831662A0;
loc_83166098:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-6
	r11.s64 = r11.s64 + -6;
	// addi r7,r9,6
	ctx.r7.s64 = ctx.r9.s64 + 6;
	// sraw r8,r10,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// clrlwi r10,r8,26
	ctx.r10.u64 = ctx.r8.u32 & 0x3F;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// b 0x831662a0
	goto loc_831662A0;
loc_831660BC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x831660d0
	if (!cr6.lt) goto loc_831660D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_831660D0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bge cr6,0x831660f4
	if (!cr6.lt) goto loc_831660F4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// b 0x83166114
	goto loc_83166114;
loc_831660F4:
	// addi r11,r10,-6
	r11.s64 = ctx.r10.s64 + -6;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// sraw r8,r9,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r11,r8,26
	r11.u64 = ctx.r8.u32 & 0x3F;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
loc_83166114:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,-128(r30)
	PPC_STORE_U32(r30.u32 + -128, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x83166130
	if (!cr6.lt) goto loc_83166130;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_83166130:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x83166098
	if (!cr6.lt) goto loc_83166098;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// b 0x831662a0
	goto loc_831662A0;
loc_83166158:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x8316616c
	if (!cr6.lt) goto loc_8316616C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_8316616C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x83166190
	if (!cr6.lt) goto loc_83166190;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x831661b0
	goto loc_831661B0;
loc_83166190:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-6
	r11.s64 = r11.s64 + -6;
	// sraw r9,r10,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// clrlwi r10,r9,26
	ctx.r10.u64 = ctx.r9.u32 & 0x3F;
	// addi r8,r11,6
	ctx.r8.s64 = r11.s64 + 6;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
loc_831661B0:
	// stw r10,-128(r30)
	PPC_STORE_U32(r30.u32 + -128, ctx.r10.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x831661c8
	if (!cr6.lt) goto loc_831661C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_831661C8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bge cr6,0x831661f4
	if (!cr6.lt) goto loc_831661F4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x831662a0
	goto loc_831662A0;
loc_831661F4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,-6
	r11.s64 = ctx.r10.s64 + -6;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// sraw r8,r9,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// clrlwi r11,r8,26
	r11.u64 = ctx.r8.u32 & 0x3F;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x831662a0
	goto loc_831662A0;
loc_83166220:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x83166234
	if (!cr6.lt) goto loc_83166234;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83165360
	sub_83165360(ctx, base);
loc_83166234:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bge cr6,0x83166264
	if (!cr6.lt) goto loc_83166264;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,-128(r30)
	PPC_STORE_U32(r30.u32 + -128, r11.u32);
	// b 0x831662a0
	goto loc_831662A0;
loc_83166264:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,-6
	r11.s64 = ctx.r10.s64 + -6;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// sraw r8,r9,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// clrlwi r11,r8,26
	r11.u64 = ctx.r8.u32 & 0x3F;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,-128(r30)
	PPC_STORE_U32(r30.u32 + -128, r11.u32);
	// b 0x831662a0
	goto loc_831662A0;
loc_83166294:
	// stw r23,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r23.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r23.u32);
	// stw r23,-128(r30)
	PPC_STORE_U32(r30.u32 + -128, r23.u32);
loc_831662A0:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,128
	r29.s64 = r29.s64 + 128;
	// addi r30,r30,384
	r30.s64 = r30.s64 + 384;
	// bne 0x83165f68
	if (!cr0.eq) goto loc_83165F68;
loc_831662B0:
	// addic. r21,r21,-1
	xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// bne 0x83165f50
	if (!cr0.eq) goto loc_83165F50;
loc_831662C0:
	// cmpwi cr6,r20,32
	cr6.compare<int32_t>(r20.s32, 32, xer);
	// bge cr6,0x8316630c
	if (!cr6.lt) goto loc_8316630C;
	// addi r11,r20,32
	r11.s64 = r20.s64 + 32;
	// subfic r8,r20,32
	xer.ca = r20.u32 <= 32;
	ctx.r8.s64 = 32 - r20.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r17
	ctx.r9.u64 = r11.u64 + r17.u64;
loc_831662D8:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// ble cr6,0x83166300
	if (!cr6.gt) goto loc_83166300;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_831662E8:
	// stw r23,128(r11)
	PPC_STORE_U32(r11.u32 + 128, r23.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// stw r23,-128(r11)
	PPC_STORE_U32(r11.u32 + -128, r23.u32);
	// addi r11,r11,384
	r11.s64 = r11.s64 + 384;
	// bne 0x831662e8
	if (!cr0.eq) goto loc_831662E8;
loc_83166300:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x831662d8
	if (!cr0.eq) goto loc_831662D8;
loc_8316630C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_83166318"))) PPC_WEAK_FUNC(sub_83166318);
PPC_FUNC_IMPL(__imp__sub_83166318) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r9,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r9.u32);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// stw r8,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r8.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r22,3
	r22.s64 = 3;
	// li r16,0
	r16.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lfs f29,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f29.f64 = double(temp.f32);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ble cr6,0x8316687c
	if (!cr6.gt) goto loc_8316687C;
	// rlwinm r11,r7,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addi r18,r8,256
	r18.s64 = ctx.r8.s64 + 256;
	// add r14,r11,r6
	r14.u64 = r11.u64 + ctx.r6.u64;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lis r9,21845
	ctx.r9.s64 = 1431633920;
	// lis r8,26214
	ctx.r8.s64 = 1717960704;
	// lis r7,14563
	ctx.r7.s64 = 954400768;
	// addi r6,r11,27224
	ctx.r6.s64 = r11.s64 + 27224;
	// li r17,0
	r17.s64 = 0;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// ori r27,r9,21846
	r27.u64 = ctx.r9.u64 | 21846;
	// li r25,5
	r25.s64 = 5;
	// ori r28,r8,26215
	r28.u64 = ctx.r8.u64 | 26215;
	// li r26,9
	r26.s64 = 9;
	// ori r29,r7,36409
	r29.u64 = ctx.r7.u64 | 36409;
loc_831663B8:
	// li r21,0
	r21.s64 = 0;
	// mr r20,r15
	r20.u64 = r15.u64;
	// mr r31,r18
	r31.u64 = r18.u64;
	// mr r23,r18
	r23.u64 = r18.u64;
	// mr r24,r14
	r24.u64 = r14.u64;
loc_831663CC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r16,r11
	cr6.compare<int32_t>(r16.s32, r11.s32, xer);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// blt cr6,0x831663e0
	if (cr6.lt) goto loc_831663E0;
	// li r11,1
	r11.s64 = 1;
loc_831663E0:
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// bge cr6,0x8316685c
	if (!cr6.lt) goto loc_8316685C;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83166804
	if (cr6.eq) goto loc_83166804;
	// add r11,r17,r11
	r11.u64 = r17.u64 + r11.u64;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,500(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lfsx f0,r6,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	f0.f64 = double(temp.f32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * f0.f64));
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x83166540
	if (!cr6.eq) goto loc_83166540;
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// bgt cr6,0x831664c8
	if (cr6.gt) goto loc_831664C8;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// sraw r11,r3,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	r11.s64 = ctx.r3.s32 >> temp.u32;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// sraw r7,r11,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r11.s32 < 0) & (((r11.s32 >> temp.u32) << temp.u32) != r11.s32);
	ctx.r7.s64 = r11.s32 >> temp.u32;
	// and r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 & r11.u64;
	// and r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 & ctx.r3.u64;
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// extsw r11,r7
	r11.s64 = ctx.r7.s32;
	// std r3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, r11.u64);
	// lfd f12,184(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// lfd f0,200(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmadds f3,f6,f31,f30
	ctx.f3.f64 = double(float(ctx.f6.f64 * f31.f64 + f30.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f5,f8,f31,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * f31.f64 + f30.f64));
	// stfs f5,-256(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + -256, temp.u32);
	// fmadds f4,f7,f31,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 * f31.f64 + f30.f64));
	// stfs f4,-128(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + -128, temp.u32);
	// b 0x83166810
	goto loc_83166810;
loc_831664C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83165620
	sub_83165620(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f31,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64 + f30.f64));
	// stfs f11,-256(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + -256, temp.u32);
	// bl 0x83165620
	sub_83165620(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r10,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r10.u64);
	// lfd f10,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f8,f31,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * f31.f64 + f30.f64));
	// stfs f7,-128(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + -128, temp.u32);
	// bl 0x83165620
	sub_83165620(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f6,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmadds f3,f4,f31,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * f31.f64 + f30.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x83166810
	goto loc_83166810;
loc_83166540:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x83165620
	sub_83165620(ctx, base);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// bne cr6,0x83166600
	if (!cr6.eq) goto loc_83166600;
	// divw r11,r3,r22
	r11.s32 = ctx.r3.s32 / r22.s32;
	// mulhw r9,r3,r27
	ctx.r9.s64 = (int64_t(ctx.r3.s32) * int64_t(r27.s32)) >> 32;
	// divw r6,r11,r22
	ctx.r6.s32 = r11.s32 / r22.s32;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mulhw r10,r6,r27
	ctx.r10.s64 = (int64_t(ctx.r6.s32) * int64_t(r27.s32)) >> 32;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mulhw r11,r5,r27
	r11.s64 = (int64_t(ctx.r5.s32) * int64_t(r27.s32)) >> 32;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r9,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r9.s64;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// subf r10,r4,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r4.s64;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// lfd f12,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, r11.u64);
	// lfd f13,168(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// extsw r3,r7
	ctx.r3.s64 = ctx.r7.s32;
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f0,104(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmadds f3,f6,f31,f30
	ctx.f3.f64 = double(float(ctx.f6.f64 * f31.f64 + f30.f64));
	// stfs f3,-256(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + -256, temp.u32);
	// fmadds f5,f8,f31,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * f31.f64 + f30.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f4,f7,f31,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 * f31.f64 + f30.f64));
	// stfs f4,-128(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + -128, temp.u32);
	// b 0x83166810
	goto loc_83166810;
loc_83166600:
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// bne cr6,0x831666c0
	if (!cr6.eq) goto loc_831666C0;
	// divw r11,r3,r25
	r11.s32 = ctx.r3.s32 / r25.s32;
	// mulhw r4,r3,r28
	ctx.r4.s64 = (int64_t(ctx.r3.s32) * int64_t(r28.s32)) >> 32;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// divw r5,r11,r25
	ctx.r5.s32 = r11.s32 / r25.s32;
	// mulhw r10,r6,r28
	ctx.r10.s64 = (int64_t(ctx.r6.s32) * int64_t(r28.s32)) >> 32;
	// mulhw r9,r5,r28
	ctx.r9.s64 = (int64_t(ctx.r5.s32) * int64_t(r28.s32)) >> 32;
	// srawi r11,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r11.s64 = ctx.r4.s32 >> 1;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r9,r7
	r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - r11.s64;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// subf r10,r8,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r8.s64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fmadds f3,f6,f31,f30
	ctx.f3.f64 = double(float(ctx.f6.f64 * f31.f64 + f30.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmadds f5,f8,f31,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * f31.f64 + f30.f64));
	// stfs f5,-256(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + -256, temp.u32);
	// fmadds f4,f7,f31,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 * f31.f64 + f30.f64));
	// stfs f4,-128(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + -128, temp.u32);
	// b 0x83166810
	goto loc_83166810;
loc_831666C0:
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(r30.s32, 9, xer);
	// bne cr6,0x83166780
	if (!cr6.eq) goto loc_83166780;
	// divw r11,r3,r26
	r11.s32 = ctx.r3.s32 / r26.s32;
	// mulhw r5,r3,r29
	ctx.r5.s64 = (int64_t(ctx.r3.s32) * int64_t(r29.s32)) >> 32;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// divw r30,r11,r26
	r30.s32 = r11.s32 / r26.s32;
	// mulhw r4,r6,r29
	ctx.r4.s64 = (int64_t(ctx.r6.s32) * int64_t(r29.s32)) >> 32;
	// srawi r11,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	r11.s64 = ctx.r5.s32 >> 1;
	// srawi r10,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// mulhw r9,r30,r29
	ctx.r9.s64 = (int64_t(r30.s32) * int64_t(r29.s32)) >> 32;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r8,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r8.s64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// subf r5,r7,r30
	ctx.r5.s64 = r30.s64 - ctx.r7.s64;
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// lfd f12,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r9,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r9.u64);
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, r11.u64);
	// lfd f0,160(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmadds f3,f6,f31,f30
	ctx.f3.f64 = double(float(ctx.f6.f64 * f31.f64 + f30.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f5,f8,f31,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * f31.f64 + f30.f64));
	// stfs f5,-128(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + -128, temp.u32);
	// fmadds f4,f7,f31,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 * f31.f64 + f30.f64));
	// stfs f4,-256(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + -256, temp.u32);
	// b 0x83166810
	goto loc_83166810;
loc_83166780:
	// divw r11,r3,r30
	r11.s32 = ctx.r3.s32 / r30.s32;
	// divw r10,r3,r30
	ctx.r10.s32 = ctx.r3.s32 / r30.s32;
	// divw r9,r11,r30
	ctx.r9.s32 = r11.s32 / r30.s32;
	// mullw r8,r10,r30
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// mullw r7,r9,r30
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// subf r6,r7,r11
	ctx.r6.s64 = r11.s64 - ctx.r7.s64;
	// divw r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	// subf r5,r8,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r8.s64;
	// divw r10,r11,r30
	ctx.r10.s32 = r11.s32 / r30.s32;
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// std r3,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r3.u64);
	// lfd f13,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// subf r8,r9,r11
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// lfd f0,208(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r7,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r7.u64);
	// lfd f12,240(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmadds f3,f6,f31,f30
	ctx.f3.f64 = double(float(ctx.f6.f64 * f31.f64 + f30.f64));
	// stfs f3,-128(r23)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r23.u32 + -128, temp.u32);
	// fmadds f5,f8,f31,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * f31.f64 + f30.f64));
	// stfs f5,0(r23)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
	// fmadds f4,f7,f31,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 * f31.f64 + f30.f64));
	// stfs f4,-256(r23)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r23.u32 + -256, temp.u32);
	// b 0x83166810
	goto loc_83166810;
loc_83166804:
	// stfs f29,-256(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + -256, temp.u32);
	// stfs f29,-128(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + -128, temp.u32);
	// stfs f29,0(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
loc_83166810:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x83166840
	if (!cr6.eq) goto loc_83166840;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r16,r11
	cr6.compare<int32_t>(r16.s32, r11.s32, xer);
	// blt cr6,0x83166840
	if (cr6.lt) goto loc_83166840;
	// lfs f0,-256(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r18.u32 + -256);
	f0.f64 = double(temp.f32);
	// lfs f13,-128(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + -128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,128(r18)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r18.u32 + 128, temp.u32);
	// stfs f13,256(r18)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r18.u32 + 256, temp.u32);
	// stfs f12,384(r18)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r18.u32 + 384, temp.u32);
loc_83166840:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r20,r20,128
	r20.s64 = r20.s64 + 128;
	// addi r24,r24,384
	r24.s64 = r24.s64 + 384;
	// addi r23,r23,384
	r23.s64 = r23.s64 + 384;
	// addi r31,r31,384
	r31.s64 = r31.s64 + 384;
	// b 0x831663cc
	goto loc_831663CC;
loc_8316685C:
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r17,r17,16
	r17.s64 = r17.s64 + 16;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// addi r14,r14,4
	r14.s64 = r14.s64 + 4;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// cmpw cr6,r16,r10
	cr6.compare<int32_t>(r16.s32, ctx.r10.s32, xer);
	// blt cr6,0x831663b8
	if (cr6.lt) goto loc_831663B8;
	// lwz r8,492(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
loc_8316687C:
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// bge cr6,0x831668c8
	if (!cr6.lt) goto loc_831668C8;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r7,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r10.s64;
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
loc_83166890:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x831668bc
	if (!cr6.gt) goto loc_831668BC;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_831668A0:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_831668A4:
	// stfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// bne 0x831668a4
	if (!cr0.eq) goto loc_831668A4;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831668a0
	if (!cr0.eq) goto loc_831668A0;
loc_831668BC:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x83166890
	if (!cr0.eq) goto loc_83166890;
loc_831668C8:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
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

__attribute__((alias("__imp__sub_831668E0"))) PPC_WEAK_FUNC(sub_831668E0);
PPC_FUNC_IMPL(__imp__sub_831668E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30536(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30536);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,-30536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30536, r11.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// lwz r9,-30556(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30556);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r9,-30556(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30556, ctx.r9.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// lwz r11,-30544(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30544);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,-30544(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30544, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166920"))) PPC_WEAK_FUNC(sub_83166920);
PPC_FUNC_IMPL(__imp__sub_83166920) {
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
	// addi r11,r6,7
	r11.s64 = ctx.r6.s64 + 7;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r31,r11,0,0,28
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r29,r6,r7
	r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r10,r31,91
	ctx.r10.s64 = r31.s64 + 91;
	// rlwinm r30,r10,0,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r30,52
	ctx.r9.s64 = r30.s64 + 52;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// bgt cr6,0x831669c8
	if (cr6.gt) goto loc_831669C8;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83162fc0
	sub_83162FC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x831669c8
	if (cr6.eq) goto loc_831669C8;
	// addi r11,r30,59
	r11.s64 = r30.s64 + 59;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r10,r11,7152
	ctx.r10.s64 = r11.s64 + 7152;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bgt cr6,0x831669bc
	if (cr6.gt) goto loc_831669BC;
	// li r4,7152
	ctx.r4.s64 = 7152;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x831657d8
	sub_831657D8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831669d4
	if (!cr6.eq) goto loc_831669D4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831669c8
	if (cr6.eq) goto loc_831669C8;
loc_831669BC:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_831669C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_831669D4:
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stb r28,10(r31)
	PPC_STORE_U8(r31.u32 + 10, r28.u8);
	// ble cr6,0x83166a08
	if (!cr6.gt) goto loc_83166A08;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// addi r9,r31,20
	ctx.r9.s64 = r31.s64 + 20;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_831669F0:
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
	// bne 0x831669f0
	if (!cr0.eq) goto loc_831669F0;
loc_83166A08:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r11,0
	r11.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r11,9(r31)
	PPC_STORE_U8(r31.u32 + 9, r11.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stb r11,11(r31)
	PPC_STORE_U8(r31.u32 + 11, r11.u8);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stb r7,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83166A70"))) PPC_WEAK_FUNC(sub_83166A70);
PPC_FUNC_IMPL(__imp__sub_83166A70) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83166ad4
	if (cr6.eq) goto loc_83166AD4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83166ab0
	if (cr6.eq) goto loc_83166AB0;
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_83166AB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83166ac4
	if (cr6.eq) goto loc_83166AC4;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x831658a0
	sub_831658A0(ctx, base);
loc_83166AC4:
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_83166AD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166AF0"))) PPC_WEAK_FUNC(sub_83166AF0);
PPC_FUNC_IMPL(__imp__sub_83166AF0) {
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
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r11,0
	r11.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stb r11,11(r31)
	PPC_STORE_U8(r31.u32 + 11, r11.u8);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83163078
	sub_83163078(ctx, base);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831658f8
	sub_831658F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,848(r30)
	PPC_STORE_U32(r30.u32 + 848, r29.u32);
	// stb r7,9(r31)
	PPC_STORE_U8(r31.u32 + 9, ctx.r7.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83166B70"))) PPC_WEAK_FUNC(sub_83166B70);
PPC_FUNC_IMPL(__imp__sub_83166B70) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831658f8
	sub_831658F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,9(r31)
	PPC_STORE_U8(r31.u32 + 9, r11.u8);
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

__attribute__((alias("__imp__sub_83166BA8"))) PPC_WEAK_FUNC(sub_83166BA8);
PPC_FUNC_IMPL(__imp__sub_83166BA8) {
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
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83166bd0
	if (!cr6.eq) goto loc_83166BD0;
loc_83166BC4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83166BD0:
	// bl 0x831656c0
	sub_831656C0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83166bc4
	if (cr6.eq) goto loc_83166BC4;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83166bf0
	if (cr6.eq) goto loc_83166BF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83166BF0:
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// bl 0x831655c8
	sub_831655C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83166bc4
	if (cr6.eq) goto loc_83166BC4;
	// addi r29,r31,856
	r29.s64 = r31.s64 + 856;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83165b68
	sub_83165B68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83166bc4
	if (cr6.lt) goto loc_83166BC4;
	// addi r30,r31,904
	r30.s64 = r31.s64 + 904;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83163180
	sub_83163180(ctx, base);
	// addi r29,r31,964
	r29.s64 = r31.s64 + 964;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// bl 0x83165c88
	sub_83165C88(ctx, base);
	// addi r7,r31,1476
	ctx.r7.s64 = r31.s64 + 1476;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// addi r6,r31,1220
	ctx.r6.s64 = r31.s64 + 1220;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83165e50
	sub_83165E50(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,841(r31)
	PPC_STORE_U8(r31.u32 + 841, r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,844(r31)
	PPC_STORE_U32(r31.u32 + 844, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83166C70"))) PPC_WEAK_FUNC(sub_83166C70);
PPC_FUNC_IMPL(__imp__sub_83166C70) {
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
	// lwz r11,844(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x83166c9c
	if (!cr6.eq) goto loc_83166C9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83166C9C:
	// srawi r7,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r7.s64 = r11.s32 >> 2;
	// lwz r9,836(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// addi r6,r31,1476
	ctx.r6.s64 = r31.s64 + 1476;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r31,964
	ctx.r5.s64 = r31.s64 + 964;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// addi r4,r31,904
	ctx.r4.s64 = r31.s64 + 904;
	// bl 0x83166318
	sub_83166318(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_83166CC0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r6,r30,r29
	ctx.r6.u64 = r30.u64 + r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 852);
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x831652a0
	sub_831652A0(ctx, base);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// cmpwi cr6,r30,384
	cr6.compare<int32_t>(r30.s32, 384, xer);
	// blt cr6,0x83166cc0
	if (cr6.lt) goto loc_83166CC0;
	// lwz r11,844(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// li r3,96
	ctx.r3.s64 = 96;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,844(r31)
	PPC_STORE_U32(r31.u32 + 844, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83166D00"))) PPC_WEAK_FUNC(sub_83166D00);
PPC_FUNC_IMPL(__imp__sub_83166D00) {
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
	// lis r31,-31941
	r31.s64 = -2093285376;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r11,-30536(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -30536);
	// lwz r9,29228(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29228);
	// lwz r8,29228(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29228);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83166de8
	if (!cr6.eq) goto loc_83166DE8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83167128
	sub_83167128(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-30564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30564, r11.u32);
	// bl 0x83167158
	sub_83167158(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-30560(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30560, r11.u32);
	// bl 0x83167188
	sub_83167188(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-30572(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30572, r11.u32);
	// bl 0x831671b8
	sub_831671B8(ctx, base);
	// lis r4,-31941
	ctx.r4.s64 = -2093285376;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// lwz r11,-30556(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30556);
	// stw r10,-30576(r7)
	PPC_STORE_U32(ctx.r7.u32 + -30576, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83166dc0
	if (!cr6.eq) goto loc_83166DC0;
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// lwz r10,-30544(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30544);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83166db8
	if (!cr6.eq) goto loc_83166DB8;
	// bl 0x83165190
	sub_83165190(ctx, base);
	// lwz r11,-30556(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30556);
	// lwz r10,-30544(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30544);
loc_83166DB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-30544(r3)
	PPC_STORE_U32(ctx.r3.u32 + -30544, ctx.r10.u32);
loc_83166DC0:
	// lwz r10,-30536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -30536);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,-30556(r4)
	PPC_STORE_U32(ctx.r4.u32 + -30556, r11.u32);
	// stw r10,-30536(r31)
	PPC_STORE_U32(r31.u32 + -30536, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83166DE8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-30536(r31)
	PPC_STORE_U32(r31.u32 + -30536, r11.u32);
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

__attribute__((alias("__imp__sub_83166E08"))) PPC_WEAK_FUNC(sub_83166E08);
PPC_FUNC_IMPL(__imp__sub_83166E08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,11(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83166e58
	if (!cr6.eq) goto loc_83166E58;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83166e58
	if (!cr6.eq) goto loc_83166E58;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83163118
	sub_83163118(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8316707c
	if (cr6.eq) goto loc_8316707C;
loc_83166E58:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r10,843(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 843);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// lwz r6,36(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// addze r28,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	r28.s64 = temp.s64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// divw r5,r3,r28
	ctx.r5.s32 = ctx.r3.s32 / r28.s32;
	// cmpwi cr6,r5,96
	cr6.compare<int32_t>(ctx.r5.s32, 96, xer);
	// blt cr6,0x83167084
	if (cr6.lt) goto loc_83167084;
	// lwz r11,844(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 844);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x83166eb4
	if (!cr6.eq) goto loc_83166EB4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83166ba8
	sub_83166BA8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8316707c
	if (cr6.eq) goto loc_8316707C;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83167084
	if (cr6.eq) goto loc_83167084;
loc_83166EB4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r7,r8,r28
	ctx.r7.s32 = ctx.r8.s32 / r28.s32;
	// cmpwi cr6,r7,96
	cr6.compare<int32_t>(ctx.r7.s32, 96, xer);
	// beq cr6,0x83166f10
	if (cr6.eq) goto loc_83166F10;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_83166F10:
	// li r6,96
	ctx.r6.s64 = 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83166c70
	sub_83166C70(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,480
	cr6.compare<int32_t>(r11.s32, 480, xer);
	// li r30,0
	r30.s64 = 0;
	// blt cr6,0x83166f3c
	if (cr6.lt) goto loc_83166F3C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_83166F3C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// lbz r10,841(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 841);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83166f54
	if (cr6.eq) goto loc_83166F54;
	// lwz r27,916(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 916);
loc_83166F54:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// ble cr6,0x83166f68
	if (!cr6.gt) goto loc_83166F68;
	// subf r30,r11,r27
	r30.s64 = r27.s64 - r11.s64;
loc_83166F68:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r30,r28
	r11.s64 = int64_t(r30.s32) * int64_t(r28.s32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// ble cr6,0x83166f84
	if (!cr6.gt) goto loc_83166F84;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
loc_83166F84:
	// subf. r11,r6,r10
	r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// beq 0x83166f9c
	if (cr0.eq) goto loc_83166F9C;
	// add r11,r5,r6
	r11.u64 = ctx.r5.u64 + ctx.r6.u64;
loc_83166F9C:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83166fc4
	if (cr6.eq) goto loc_83166FC4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83166fc4
	if (!cr6.gt) goto loc_83166FC4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83166FC4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// add r7,r11,r29
	ctx.r7.u64 = r11.u64 + r29.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// add r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 + r29.u64;
	// stw r7,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// addi r3,r9,7
	ctx.r3.s64 = ctx.r9.s64 + 7;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// srawi r9,r3,3
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// stw r6,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r6.u32);
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// blt cr6,0x83167070
	if (cr6.lt) goto loc_83167070;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x83167070
	if (cr6.lt) goto loc_83167070;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83167070
	if (cr6.eq) goto loc_83167070;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83167070:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// blt cr6,0x83167084
	if (cr6.lt) goto loc_83167084;
loc_8316707C:
	// li r11,3
	r11.s64 = 3;
	// stb r11,9(r31)
	PPC_STORE_U8(r31.u32 + 9, r11.u8);
loc_83167084:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83167090"))) PPC_WEAK_FUNC(sub_83167090);
PPC_FUNC_IMPL(__imp__sub_83167090) {
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
	// lbz r11,9(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x831670cc
	if (!cr6.eq) goto loc_831670CC;
	// bl 0x83166e08
	sub_83166E08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831670CC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83167114
	if (!cr6.eq) goto loc_83167114;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,36
	cr6.compare<int32_t>(ctx.r3.s32, 36, xer);
	// blt cr6,0x83167114
	if (cr6.lt) goto loc_83167114;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83165a08
	sub_83165A08(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83166ba8
	sub_83166BA8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,11(r31)
	PPC_STORE_U8(r31.u32 + 11, r11.u8);
	// stb r10,9(r31)
	PPC_STORE_U8(r31.u32 + 9, ctx.r10.u8);
loc_83167114:
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

__attribute__((alias("__imp__sub_83167128"))) PPC_WEAK_FUNC(sub_83167128);
PPC_FUNC_IMPL(__imp__sub_83167128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316713c
	if (cr6.eq) goto loc_8316713C;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r11,-25728(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -25728);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_8316713C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r10,-25724(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -25724);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167158"))) PPC_WEAK_FUNC(sub_83167158);
PPC_FUNC_IMPL(__imp__sub_83167158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316716c
	if (cr6.eq) goto loc_8316716C;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r11,-25720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -25720);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_8316716C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r10,-25716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -25716);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167188"))) PPC_WEAK_FUNC(sub_83167188);
PPC_FUNC_IMPL(__imp__sub_83167188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316719c
	if (cr6.eq) goto loc_8316719C;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r11,-17392(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17392);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_8316719C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r10,-17388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -17388);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831671B8"))) PPC_WEAK_FUNC(sub_831671B8);
PPC_FUNC_IMPL(__imp__sub_831671B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831671cc
	if (cr6.eq) goto loc_831671CC;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r11,-15208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -15208);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_831671CC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r10,-15204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -15204);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831671E8"))) PPC_WEAK_FUNC(sub_831671E8);
PPC_FUNC_IMPL(__imp__sub_831671E8) {
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
	// lis r31,-31941
	r31.s64 = -2093285376;
	// lwz r3,-30008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -30008);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83167214
	if (cr6.eq) goto loc_83167214;
	// bl 0x83168748
	sub_83168748(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-30008(r31)
	PPC_STORE_U32(r31.u32 + -30008, r11.u32);
loc_83167214:
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

__attribute__((alias("__imp__sub_83167228"))) PPC_WEAK_FUNC(sub_83167228);
PPC_FUNC_IMPL(__imp__sub_83167228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,7
	r11.s64 = ctx.r3.s64 + 7;
	// rlwinm r3,r11,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167238"))) PPC_WEAK_FUNC(sub_83167238);
PPC_FUNC_IMPL(__imp__sub_83167238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// clrlwi r3,r11,16
	ctx.r3.u64 = r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167248"))) PPC_WEAK_FUNC(sub_83167248);
PPC_FUNC_IMPL(__imp__sub_83167248) {
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
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x83167228
	sub_83167228(ctx, base);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167278"))) PPC_WEAK_FUNC(sub_83167278);
PPC_FUNC_IMPL(__imp__sub_83167278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167288"))) PPC_WEAK_FUNC(sub_83167288);
PPC_FUNC_IMPL(__imp__sub_83167288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bgt cr6,0x83167298
	if (cr6.gt) goto loc_83167298;
	// li r11,8
	r11.s64 = 8;
loc_83167298:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x831672cc
	if (cr0.eq) goto loc_831672CC;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r11.s64 = temp.s64;
	// divwu r8,r3,r11
	ctx.r8.u32 = ctx.r3.u32 / r11.u32;
	// mullw r3,r8,r11
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// blr 
	return;
loc_831672CC:
	// divwu r10,r3,r11
	ctx.r10.u32 = ctx.r3.u32 / r11.u32;
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831672D8"))) PPC_WEAK_FUNC(sub_831672D8);
PPC_FUNC_IMPL(__imp__sub_831672D8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x83167248
	sub_83167248(ctx, base);
	// lhz r11,14(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// addi r9,r11,28
	ctx.r9.s64 = r11.s64 + 28;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167308"))) PPC_WEAK_FUNC(sub_83167308);
PPC_FUNC_IMPL(__imp__sub_83167308) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167310"))) PPC_WEAK_FUNC(sub_83167310);
PPC_FUNC_IMPL(__imp__sub_83167310) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x83167308
	sub_83167308(ctx, base);
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167338"))) PPC_WEAK_FUNC(sub_83167338);
PPC_FUNC_IMPL(__imp__sub_83167338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bge cr6,0x8316734c
	if (!cr6.lt) goto loc_8316734C;
	// li r11,8
	r11.s64 = 8;
loc_8316734C:
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / r11.u32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// subf. r3,r8,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// subf r3,r3,r11
	ctx.r3.s64 = r11.s64 - ctx.r3.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167368"))) PPC_WEAK_FUNC(sub_83167368);
PPC_FUNC_IMPL(__imp__sub_83167368) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// bl 0x83167228
	sub_83167228(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r30,r10,r28
	r30.s64 = r28.s64 - ctx.r10.s64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83167338
	sub_83167338(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r3,14(r28)
	PPC_STORE_U16(r28.u32 + 14, ctx.r3.u16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// bl 0x83167238
	sub_83167238(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r8,r30,r29
	ctx.r8.s64 = r29.s64 - r30.s64;
	// stb r10,13(r28)
	PPC_STORE_U8(r28.u32 + 13, ctx.r10.u8);
	// sth r10,16(r28)
	PPC_STORE_U16(r28.u32 + 16, ctx.r10.u16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subf r11,r9,r8
	r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r7,r11,-24
	ctx.r7.s64 = r11.s64 + -24;
	// stw r7,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r7.u32);
	// bl 0x831672d8
	sub_831672D8(ctx, base);
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83167408"))) PPC_WEAK_FUNC(sub_83167408);
PPC_FUNC_IMPL(__imp__sub_83167408) {
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
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x83167338
	sub_83167338(ctx, base);
	// lhz r6,14(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 14);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167448"))) PPC_WEAK_FUNC(sub_83167448);
PPC_FUNC_IMPL(__imp__sub_83167448) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x83167338
	sub_83167338(ctx, base);
	// lhz r8,16(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 16);
	// lhz r11,14(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 14);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// ble cr6,0x83167490
	if (!cr6.gt) goto loc_83167490;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83167490:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831674A0"))) PPC_WEAK_FUNC(sub_831674A0);
PPC_FUNC_IMPL(__imp__sub_831674A0) {
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
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_831674B8:
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831674f0
	if (!cr6.eq) goto loc_831674F0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bne cr6,0x831674e4
	if (!cr6.eq) goto loc_831674E4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167408
	sub_83167408(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83167508
	if (cr6.eq) goto loc_83167508;
loc_831674E4:
	// lbz r11,13(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83167508
	if (cr6.eq) goto loc_83167508;
loc_831674F0:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831674b8
	if (!cr6.eq) goto loc_831674B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83167508:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83167518"))) PPC_WEAK_FUNC(sub_83167518);
PPC_FUNC_IMPL(__imp__sub_83167518) {
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
	// lwz r31,20(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_83167530:
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83167594
	if (!cr6.eq) goto loc_83167594;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167448
	sub_83167448(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83167568
	if (!cr6.eq) goto loc_83167568;
	// lbz r11,13(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831675ac
	if (cr6.eq) goto loc_831675AC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x831675ac
	if (cr6.eq) goto loc_831675AC;
loc_83167568:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bne cr6,0x83167594
	if (!cr6.eq) goto loc_83167594;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167408
	sub_83167408(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83167594
	if (!cr6.eq) goto loc_83167594;
	// lbz r11,13(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x831675ac
	if (cr6.eq) goto loc_831675AC;
loc_83167594:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83167530
	if (!cr6.eq) goto loc_83167530;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831675AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831675B8"))) PPC_WEAK_FUNC(sub_831675B8);
PPC_FUNC_IMPL(__imp__sub_831675B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831675e8
	if (cr6.eq) goto loc_831675E8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x831675e4
	if (cr6.eq) goto loc_831675E4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x831675ec
	if (cr6.eq) goto loc_831675EC;
loc_831675E0:
	// b 0x831675e0
	goto loc_831675E0;
loc_831675E4:
	// b 0x83167518
	sub_83167518(ctx, base);
	return;
loc_831675E8:
	// b 0x831674a0
	sub_831674A0(ctx, base);
	return;
loc_831675EC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831675F8"))) PPC_WEAK_FUNC(sub_831675F8);
PPC_FUNC_IMPL(__imp__sub_831675F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167610"))) PPC_WEAK_FUNC(sub_83167610);
PPC_FUNC_IMPL(__imp__sub_83167610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167620"))) PPC_WEAK_FUNC(sub_83167620);
PPC_FUNC_IMPL(__imp__sub_83167620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,16(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lhz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167640"))) PPC_WEAK_FUNC(sub_83167640);
PPC_FUNC_IMPL(__imp__sub_83167640) {
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
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r7,r11,28
	ctx.r7.s64 = r11.s64 + 28;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// bl 0x83167228
	sub_83167228(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83167338
	sub_83167338(ctx, base);
	// add r11,r3,r7
	r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r8,r11,28
	ctx.r8.s64 = r11.s64 + 28;
	// bl 0x83167620
	sub_83167620(ctx, base);
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x8316768c
	if (cr6.lt) goto loc_8316768C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8316768C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831676A0"))) PPC_WEAK_FUNC(sub_831676A0);
PPC_FUNC_IMPL(__imp__sub_831676A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831676C0"))) PPC_WEAK_FUNC(sub_831676C0);
PPC_FUNC_IMPL(__imp__sub_831676C0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x83167620
	sub_83167620(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167338
	sub_83167338(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r27,r3,16
	r27.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bne cr6,0x83167764
	if (!cr6.eq) goto loc_83167764;
	// lhz r11,14(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83167764
	if (!cr6.eq) goto loc_83167764;
	// lbz r11,13(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8316772c
	if (!cr6.eq) goto loc_8316772C;
loc_83167720:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
loc_8316772C:
	// li r11,1
	r11.s64 = 1;
	// stw r25,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r25.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r11.u8);
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// bl 0x831672d8
	sub_831672D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167620
	sub_83167620(ctx, base);
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
loc_83167764:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167640
	sub_83167640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83167720
	if (cr6.eq) goto loc_83167720;
	// clrlwi r11,r27,16
	r11.u64 = r27.u32 & 0xFFFF;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r29,r11,28
	r29.s64 = r11.s64 + 28;
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83167228
	sub_83167228(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// subf r11,r10,r30
	r11.s64 = r30.s64 - ctx.r10.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi r23,r11,16
	r23.u64 = r11.u32 & 0xFFFF;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83167338
	sub_83167338(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// li r11,1
	r11.s64 = 1;
	// subf r9,r10,r24
	ctx.r9.s64 = r24.s64 - ctx.r10.s64;
	// sth r10,14(r30)
	PPC_STORE_U16(r30.u32 + 14, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r8,r23,r9
	ctx.r8.s64 = ctx.r9.s64 - r23.s64;
	// subf r10,r29,r8
	ctx.r10.s64 = ctx.r8.s64 - r29.s64;
	// addi r7,r10,-28
	ctx.r7.s64 = ctx.r10.s64 + -28;
	// stw r7,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r6,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r6.u32);
	// sth r27,14(r31)
	PPC_STORE_U16(r31.u32 + 14, r27.u16);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stb r11,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r11.u8);
	// stw r25,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r25.u32);
	// sth r23,16(r31)
	PPC_STORE_U16(r31.u32 + 16, r23.u16);
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// bl 0x831672d8
	sub_831672D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167620
	sub_83167620(ctx, base);
	// lwz r5,12(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// add r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stw r4,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r4.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83167838
	if (!cr6.eq) goto loc_83167838;
	// stw r30,20(r26)
	PPC_STORE_U32(r26.u32 + 20, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
loc_83167838:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83167848"))) PPC_WEAK_FUNC(sub_83167848);
PPC_FUNC_IMPL(__imp__sub_83167848) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x831676a0
	sub_831676A0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// bne cr6,0x831678e4
	if (!cr6.eq) goto loc_831678E4;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167338
	sub_83167338(ctx, base);
	// lhz r11,14(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x831678e4
	if (!cr6.eq) goto loc_831678E4;
	// lbz r11,13(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831678a8
	if (!cr6.eq) goto loc_831678A8;
loc_8316789C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_831678A8:
	// li r11,2
	r11.s64 = 2;
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r10.u8);
	// bl 0x831672d8
	sub_831672D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167620
	sub_83167620(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_831678E4:
	// subf r28,r5,r6
	r28.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83167288
	sub_83167288(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r10,r28
	r11.s64 = r28.s64 - ctx.r10.s64;
	// addi r8,r10,-28
	ctx.r8.s64 = ctx.r10.s64 + -28;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// rlwinm r7,r8,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// bl 0x83167610
	sub_83167610(ctx, base);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bge cr6,0x83167978
	if (!cr6.lt) goto loc_83167978;
	// lbz r11,13(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8316789c
	if (cr6.eq) goto loc_8316789C;
	// subf r11,r31,r10
	r11.s64 = ctx.r10.s64 - r31.s64;
	// sth r9,16(r31)
	PPC_STORE_U16(r31.u32 + 16, ctx.r9.u16);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// addis r9,r11,1
	ctx.r9.s64 = r11.s64 + 65536;
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,13(r31)
	PPC_STORE_U8(r31.u32 + 13, ctx.r10.u8);
	// addi r9,r9,-28
	ctx.r9.s64 = ctx.r9.s64 + -28;
	// stb r8,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r9,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r9.u16);
	// bl 0x831672d8
	sub_831672D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167620
	sub_83167620(ctx, base);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83167978:
	// subf r11,r7,r10
	r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addis r8,r11,1
	ctx.r8.s64 = r11.s64 + 65536;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r10,13(r7)
	PPC_STORE_U8(ctx.r7.u32 + 13, ctx.r10.u8);
	// addi r8,r8,-28
	ctx.r8.s64 = ctx.r8.s64 + -28;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// sth r8,14(r7)
	PPC_STORE_U16(ctx.r7.u32 + 14, ctx.r8.u16);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r31.u32);
	// sth r9,16(r7)
	PPC_STORE_U16(ctx.r7.u32 + 16, ctx.r9.u16);
	// stw r29,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, r29.u32);
	// stb r6,12(r7)
	PPC_STORE_U8(ctx.r7.u32 + 12, ctx.r6.u8);
	// bl 0x831672d8
	sub_831672D8(ctx, base);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83167620
	sub_83167620(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// bl 0x83167338
	sub_83167338(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// sth r3,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r3.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831679ec
	if (cr6.eq) goto loc_831679EC;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
loc_831679EC:
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167238
	sub_83167238(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r10,r31,r7
	ctx.r10.s64 = ctx.r7.s64 - r31.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// sth r9,16(r31)
	PPC_STORE_U16(r31.u32 + 16, ctx.r9.u16);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bl 0x83167278
	sub_83167278(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83167a24
	if (!cr6.eq) goto loc_83167A24;
	// stw r7,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r7.u32);
loc_83167A24:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83167A30"))) PPC_WEAK_FUNC(sub_83167A30);
PPC_FUNC_IMPL(__imp__sub_83167A30) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x83167a64
	if (!cr6.lt) goto loc_83167A64;
loc_83167A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83167A64:
	// clrlwi r6,r29,16
	ctx.r6.u64 = r29.u32 & 0xFFFF;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831675b8
	sub_831675B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83167a58
	if (cr6.eq) goto loc_83167A58;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// beq cr6,0x83167ab4
	if (cr6.eq) goto loc_83167AB4;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// beq cr6,0x83167a9c
	if (cr6.eq) goto loc_83167A9C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83167acc
	goto loc_83167ACC;
loc_83167A9C:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83167848
	sub_83167848(ctx, base);
	// b 0x83167ac8
	goto loc_83167AC8;
loc_83167AB4:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831676c0
	sub_831676C0(ctx, base);
loc_83167AC8:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_83167ACC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831675f8
	sub_831675F8(ctx, base);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83167a58
	if (cr6.eq) goto loc_83167A58;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83167610
	sub_83167610(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83167AF0"))) PPC_WEAK_FUNC(sub_83167AF0);
PPC_FUNC_IMPL(__imp__sub_83167AF0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83167a30
	sub_83167A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167B08"))) PPC_WEAK_FUNC(sub_83167B08);
PPC_FUNC_IMPL(__imp__sub_83167B08) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83167a30
	sub_83167A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167B20"))) PPC_WEAK_FUNC(sub_83167B20);
PPC_FUNC_IMPL(__imp__sub_83167B20) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x83167a30
	sub_83167A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167B38"))) PPC_WEAK_FUNC(sub_83167B38);
PPC_FUNC_IMPL(__imp__sub_83167B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83167b4c
	if (!cr6.eq) goto loc_83167B4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83167B4C:
	// lbz r11,13(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167B60"))) PPC_WEAK_FUNC(sub_83167B60);
PPC_FUNC_IMPL(__imp__sub_83167B60) {
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
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83167b94
	if (!cr6.eq) goto loc_83167B94;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83167620
	sub_83167620(ctx, base);
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
loc_83167B94:
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83167bb0
	if (cr6.eq) goto loc_83167BB0;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_83167BB0:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stb r31,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, r31.u8);
	// beq cr6,0x83167c00
	if (cr6.eq) goto loc_83167C00;
	// lbz r11,12(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83167c00
	if (!cr6.eq) goto loc_83167C00;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83167620
	sub_83167620(ctx, base);
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + r11.u64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// beq cr6,0x83167bec
	if (cr6.eq) goto loc_83167BEC;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
loc_83167BEC:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83167c04
	if (!cr6.eq) goto loc_83167C04;
	// stw r8,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r8.u32);
	// b 0x83167c04
	goto loc_83167C04;
loc_83167C00:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_83167C04:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83167c90
	if (cr6.eq) goto loc_83167C90;
	// lbz r11,12(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83167c90
	if (!cr6.eq) goto loc_83167C90;
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// bl 0x83167620
	sub_83167620(ctx, base);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83167c44
	if (cr6.eq) goto loc_83167C44;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_83167C44:
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bne cr6,0x83167c5c
	if (!cr6.eq) goto loc_83167C5C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83167c68
	if (!cr6.eq) goto loc_83167C68;
	// stw r4,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r4.u32);
	// b 0x83167c68
	goto loc_83167C68;
loc_83167C5C:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83167c68
	if (!cr6.eq) goto loc_83167C68;
	// stw r8,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r8.u32);
loc_83167C68:
	// lbz r11,13(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83167c78
	if (!cr6.eq) goto loc_83167C78;
	// stb r31,13(r8)
	PPC_STORE_U8(ctx.r8.u32 + 13, r31.u8);
loc_83167C78:
	// lwz r11,20(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83167c88
	if (!cr6.eq) goto loc_83167C88;
	// stw r31,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, r31.u32);
loc_83167C88:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x831672d8
	sub_831672D8(ctx, base);
loc_83167C90:
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

__attribute__((alias("__imp__sub_83167CA8"))) PPC_WEAK_FUNC(sub_83167CA8);
PPC_FUNC_IMPL(__imp__sub_83167CA8) {
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
	// lbz r11,13(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,8(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x83167cd8
	if (!cr6.eq) goto loc_83167CD8;
	// bl 0x83167b60
	sub_83167B60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83167CD8:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83167ddc
	if (!cr6.eq) goto loc_83167DDC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83167620
	sub_83167620(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// bl 0x83167b38
	sub_83167B38(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83167db4
	if (!cr6.eq) goto loc_83167DB4;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83167620
	sub_83167620(ctx, base);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r31,r3,r5
	r31.u64 = ctx.r3.u64 + ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83167d44
	if (cr6.eq) goto loc_83167D44;
loc_83167D24:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x83167d44
	if (cr6.eq) goto loc_83167D44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83167d24
	if (!cr6.eq) goto loc_83167D24;
loc_83167D44:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stb r6,12(r7)
	PPC_STORE_U8(ctx.r7.u32 + 12, ctx.r6.u8);
	// stb r6,13(r7)
	PPC_STORE_U8(ctx.r7.u32 + 13, ctx.r6.u8);
	// bl 0x83167338
	sub_83167338(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// sth r6,16(r7)
	PPC_STORE_U16(ctx.r7.u32 + 16, ctx.r6.u16);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// sth r11,14(r7)
	PPC_STORE_U16(ctx.r7.u32 + 14, r11.u16);
	// stw r6,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r6.u32);
	// bl 0x83167238
	sub_83167238(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r9,r7,r31
	ctx.r9.s64 = r31.s64 - ctx.r7.s64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// beq cr6,0x83167da4
	if (cr6.eq) goto loc_83167DA4;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83167DA4:
	// stw r7,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83167DB4:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r6.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83167dd0
	if (!cr6.eq) goto loc_83167DD0;
	// stb r6,13(r4)
	PPC_STORE_U8(ctx.r4.u32 + 13, ctx.r6.u8);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
loc_83167DD0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83167DDC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83167DE8"))) PPC_WEAK_FUNC(sub_83167DE8);
PPC_FUNC_IMPL(__imp__sub_83167DE8) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83167e0c
	if (!cr6.eq) goto loc_83167E0C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,30380
	ctx.r4.s64 = r11.s64 + 30380;
	// b 0x83167e50
	goto loc_83167E50;
loc_83167E0C:
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bgt cr6,0x83167e48
	if (cr6.gt) goto loc_83167E48;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// blt cr6,0x83167e48
	if (cr6.lt) goto loc_83167E48;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83167310
	sub_83167310(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83167ca8
	sub_83167CA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83167E48:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,30340
	ctx.r4.s64 = r11.s64 + 30340;
loc_83167E50:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
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

__attribute__((alias("__imp__sub_83167E70"))) PPC_WEAK_FUNC(sub_83167E70);
PPC_FUNC_IMPL(__imp__sub_83167E70) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,-30008(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -30008);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83167eac
	if (!cr6.eq) goto loc_83167EAC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,30412
	ctx.r4.s64 = r11.s64 + 30412;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83167EAC:
	// bl 0x83168760
	sub_83168760(ctx, base);
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

__attribute__((alias("__imp__sub_83167EC8"))) PPC_WEAK_FUNC(sub_83167EC8);
PPC_FUNC_IMPL(__imp__sub_83167EC8) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,-30008(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -30008);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83167f04
	if (!cr6.eq) goto loc_83167F04;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,30452
	ctx.r4.s64 = r11.s64 + 30452;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83167F04:
	// bl 0x83168778
	sub_83168778(ctx, base);
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

__attribute__((alias("__imp__sub_83167F20"))) PPC_WEAK_FUNC(sub_83167F20);
PPC_FUNC_IMPL(__imp__sub_83167F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bge cr6,0x83167f34
	if (!cr6.lt) goto loc_83167F34;
	// li r11,8
	r11.s64 = 8;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// blr 
	return;
loc_83167F34:
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167F40"))) PPC_WEAK_FUNC(sub_83167F40);
PPC_FUNC_IMPL(__imp__sub_83167F40) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831683e0
	sub_831683E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167F50"))) PPC_WEAK_FUNC(sub_83167F50);
PPC_FUNC_IMPL(__imp__sub_83167F50) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r31,r11,-30016
	r31.s64 = r11.s64 + -30016;
	// addi r9,r10,30256
	ctx.r9.s64 = ctx.r10.s64 + 30256;
	// stw r9,-30016(r11)
	PPC_STORE_U32(r11.u32 + -30016, ctx.r9.u32);
	// bl 0x8316c1a0
	sub_8316C1A0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x83168738
	sub_83168738(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83167f9c
	if (!cr6.eq) goto loc_83167F9C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,30492
	ctx.r4.s64 = r11.s64 + 30492;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83167F9C:
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

__attribute__((alias("__imp__sub_83167FB0"))) PPC_WEAK_FUNC(sub_83167FB0);
PPC_FUNC_IMPL(__imp__sub_83167FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30012(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30012);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,-30012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30012, ctx.r9.u32);
	// lwz r8,-30012(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30012);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x831671e8
	sub_831671E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167FD0"))) PPC_WEAK_FUNC(sub_83167FD0);
PPC_FUNC_IMPL(__imp__sub_83167FD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167FD8"))) PPC_WEAK_FUNC(sub_83167FD8);
PPC_FUNC_IMPL(__imp__sub_83167FD8) {
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
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168010
	if (cr6.eq) goto loc_83168010;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83168010:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,29564
	ctx.r4.s64 = r11.s64 + 29564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83167f40
	sub_83167F40(ctx, base);
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

__attribute__((alias("__imp__sub_83168038"))) PPC_WEAK_FUNC(sub_83168038);
PPC_FUNC_IMPL(__imp__sub_83168038) {
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
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8316806c
	if (cr6.eq) goto loc_8316806C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8316806C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,29512
	ctx.r4.s64 = r11.s64 + 29512;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83167f40
	sub_83167F40(ctx, base);
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

__attribute__((alias("__imp__sub_83168098"))) PPC_WEAK_FUNC(sub_83168098);
PPC_FUNC_IMPL(__imp__sub_83168098) {
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
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x831680c0
	if (!cr6.eq) goto loc_831680C0;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_831680C0:
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x831680dc
	if (!cr6.eq) goto loc_831680DC;
	// bl 0x83168038
	sub_83168038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_831680DC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,30540
	ctx.r4.s64 = r11.s64 + 30540;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
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

__attribute__((alias("__imp__sub_83168100"))) PPC_WEAK_FUNC(sub_83168100);
PPC_FUNC_IMPL(__imp__sub_83168100) {
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
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83168134
	if (cr6.eq) goto loc_83168134;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83168134:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,29396
	ctx.r4.s64 = r11.s64 + 29396;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83167f40
	sub_83167F40(ctx, base);
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

__attribute__((alias("__imp__sub_83168160"))) PPC_WEAK_FUNC(sub_83168160);
PPC_FUNC_IMPL(__imp__sub_83168160) {
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
	// cmpwi cr6,r30,24
	cr6.compare<int32_t>(r30.s32, 24, xer);
	// bgt cr6,0x8316818c
	if (cr6.gt) goto loc_8316818C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831681b4
	goto loc_831681B4;
loc_8316818C:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167368
	sub_83167368(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r10,r11,-15200
	ctx.r10.s64 = r11.s64 + -15200;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_831681B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831681D0"))) PPC_WEAK_FUNC(sub_831681D0);
PPC_FUNC_IMPL(__imp__sub_831681D0) {
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
	// cmpwi cr6,r30,24
	cr6.compare<int32_t>(r30.s32, 24, xer);
	// bgt cr6,0x831681fc
	if (cr6.gt) goto loc_831681FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83168224
	goto loc_83168224;
loc_831681FC:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167368
	sub_83167368(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r10,r11,-15184
	ctx.r10.s64 = r11.s64 + -15184;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83168224:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168240"))) PPC_WEAK_FUNC(sub_83168240);
PPC_FUNC_IMPL(__imp__sub_83168240) {
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
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
loc_8316825C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,4(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x83167b60
	sub_83167B60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8316825c
	if (!cr6.eq) goto loc_8316825C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168290"))) PPC_WEAK_FUNC(sub_83168290);
PPC_FUNC_IMPL(__imp__sub_83168290) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x83167e70
	sub_83167E70(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167af0
	sub_83167AF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83167ec8
	sub_83167EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831682D8"))) PPC_WEAK_FUNC(sub_831682D8);
PPC_FUNC_IMPL(__imp__sub_831682D8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x83167e70
	sub_83167E70(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167b08
	sub_83167B08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83167ec8
	sub_83167EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83168320"))) PPC_WEAK_FUNC(sub_83168320);
PPC_FUNC_IMPL(__imp__sub_83168320) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x83167e70
	sub_83167E70(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167b20
	sub_83167B20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83167ec8
	sub_83167EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83168368"))) PPC_WEAK_FUNC(sub_83168368);
PPC_FUNC_IMPL(__imp__sub_83168368) {
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
	// bl 0x83167e70
	sub_83167E70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83167de8
	sub_83167DE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83167ec8
	sub_83167EC8(ctx, base);
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

__attribute__((alias("__imp__sub_831683B8"))) PPC_WEAK_FUNC(sub_831683B8);
PPC_FUNC_IMPL(__imp__sub_831683B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30012(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30012);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,-30012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30012, ctx.r9.u32);
	// lwz r8,-30012(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30012);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x83167f50
	sub_83167F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831683D8"))) PPC_WEAK_FUNC(sub_831683D8);
PPC_FUNC_IMPL(__imp__sub_831683D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831683E0"))) PPC_WEAK_FUNC(sub_831683E0);
PPC_FUNC_IMPL(__imp__sub_831683E0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8316c1a0
	sub_8316C1A0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r11,r11,-29932
	r11.s64 = r11.s64 + -29932;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83168420
	if (!cr6.eq) goto loc_83168420;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// beq cr6,0x83168448
	if (cr6.eq) goto loc_83168448;
loc_83168420:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168448
	if (cr6.eq) goto loc_83168448;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83168448:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83168450"))) PPC_WEAK_FUNC(sub_83168450);
PPC_FUNC_IMPL(__imp__sub_83168450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,30676
	r11.s64 = r11.s64 + 30676;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168490
	if (cr6.eq) goto loc_83168490;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8316846C:
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// beq cr6,0x8316849c
	if (cr6.eq) goto loc_8316849C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8316846c
	if (!cr6.eq) goto loc_8316846C;
loc_83168490:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,30656
	ctx.r3.s64 = r11.s64 + 30656;
	// blr 
	return;
loc_8316849C:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831684B0"))) PPC_WEAK_FUNC(sub_831684B0);
PPC_FUNC_IMPL(__imp__sub_831684B0) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x831683e0
	sub_831683E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831684C0"))) PPC_WEAK_FUNC(sub_831684C0);
PPC_FUNC_IMPL(__imp__sub_831684C0) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831683e0
	sub_831683E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831684D0"))) PPC_WEAK_FUNC(sub_831684D0);
PPC_FUNC_IMPL(__imp__sub_831684D0) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x831683e0
	sub_831683E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831684D8"))) PPC_WEAK_FUNC(sub_831684D8);
PPC_FUNC_IMPL(__imp__sub_831684D8) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x83168450
	sub_83168450(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r11,-29920
	ctx.r4.s64 = r11.s64 + -29920;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// subf r9,r6,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r6.s64;
loc_8316850C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x8316850c
	if (!cr6.eq) goto loc_8316850C;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r9,r9,12936
	ctx.r9.s64 = ctx.r9.s64 + 12936;
loc_8316852C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8316852c
	if (!cr6.eq) goto loc_8316852C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_83168540:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x83168540
	if (!cr6.eq) goto loc_83168540;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8316855C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8316855c
	if (!cr6.eq) goto loc_8316855C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_83168570:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x83168570
	if (!cr6.eq) goto loc_83168570;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831683e0
	sub_831683E0(ctx, base);
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

__attribute__((alias("__imp__sub_831685B0"))) PPC_WEAK_FUNC(sub_831685B0);
PPC_FUNC_IMPL(__imp__sub_831685B0) {
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
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831685f8
	if (!cr6.eq) goto loc_831685F8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_831685F8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stwx r29,r31,r30
	PPC_STORE_U32(r31.u32 + r30.u32, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83168618"))) PPC_WEAK_FUNC(sub_83168618);
PPC_FUNC_IMPL(__imp__sub_83168618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// b 0x83168100
	sub_83168100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83168628"))) PPC_WEAK_FUNC(sub_83168628);
PPC_FUNC_IMPL(__imp__sub_83168628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// add r11,r3,r6
	r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// bge cr6,0x8316863c
	if (!cr6.lt) goto loc_8316863C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8316863C:
	// add r11,r4,r6
	r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// neg r10,r6
	ctx.r10.s64 = -ctx.r6.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// and r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168650"))) PPC_WEAK_FUNC(sub_83168650);
PPC_FUNC_IMPL(__imp__sub_83168650) {
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
	// bl 0x83167f20
	sub_83167F20(ctx, base);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168678"))) PPC_WEAK_FUNC(sub_83168678);
PPC_FUNC_IMPL(__imp__sub_83168678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r11,30716
	ctx.r6.s64 = r11.s64 + 30716;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x831685b0
	sub_831685B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83168690"))) PPC_WEAK_FUNC(sub_83168690);
PPC_FUNC_IMPL(__imp__sub_83168690) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x831685b0
	sub_831685B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831686A0"))) PPC_WEAK_FUNC(sub_831686A0);
PPC_FUNC_IMPL(__imp__sub_831686A0) {
	PPC_FUNC_PROLOGUE();
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x83168628
	sub_83168628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831686A8"))) PPC_WEAK_FUNC(sub_831686A8);
PPC_FUNC_IMPL(__imp__sub_831686A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,30824
	ctx.r9.s64 = r11.s64 + 30824;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831686C0"))) PPC_WEAK_FUNC(sub_831686C0);
PPC_FUNC_IMPL(__imp__sub_831686C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r10,r11,30824
	ctx.r10.s64 = r11.s64 + 30824;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831686D0"))) PPC_WEAK_FUNC(sub_831686D0);
PPC_FUNC_IMPL(__imp__sub_831686D0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r9,r11,30728
	ctx.r9.s64 = r11.s64 + 30728;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r9,-29664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29664, ctx.r9.u32);
	// bl 0x8316c1a0
	sub_8316C1A0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8316c468
	sub_8316C468(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83168728
	if (cr6.eq) goto loc_83168728;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83168730
	if (cr6.eq) goto loc_83168730;
loc_83168728:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83168730:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83168738"))) PPC_WEAK_FUNC(sub_83168738);
PPC_FUNC_IMPL(__imp__sub_83168738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r5,r11,-29936
	ctx.r5.s64 = r11.s64 + -29936;
	// b 0x831686d0
	sub_831686D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83168748"))) PPC_WEAK_FUNC(sub_83168748);
PPC_FUNC_IMPL(__imp__sub_83168748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29936
	ctx.r4.s64 = ctx.r10.s64 + -29936;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83168760"))) PPC_WEAK_FUNC(sub_83168760);
PPC_FUNC_IMPL(__imp__sub_83168760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29936
	ctx.r4.s64 = ctx.r10.s64 + -29936;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83168778"))) PPC_WEAK_FUNC(sub_83168778);
PPC_FUNC_IMPL(__imp__sub_83168778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29936
	ctx.r4.s64 = ctx.r10.s64 + -29936;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83168790"))) PPC_WEAK_FUNC(sub_83168790);
PPC_FUNC_IMPL(__imp__sub_83168790) {
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
	// bl 0x831686c0
	sub_831686C0(ctx, base);
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831687c0
	if (cr6.eq) goto loc_831687C0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831687C0:
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

__attribute__((alias("__imp__sub_831687D8"))) PPC_WEAK_FUNC(sub_831687D8);
PPC_FUNC_IMPL(__imp__sub_831687D8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r5,r10,30880
	ctx.r5.s64 = ctx.r10.s64 + 30880;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83168838
	if (!cr6.eq) goto loc_83168838;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,30840
	ctx.r4.s64 = r11.s64 + 30840;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-3
	ctx.r10.s64 = -3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83168838:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831686d0
	sub_831686D0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83168870
	if (cr6.eq) goto loc_83168870;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83168870:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83168880"))) PPC_WEAK_FUNC(sub_83168880);
PPC_FUNC_IMPL(__imp__sub_83168880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r5,r11,-29936
	ctx.r5.s64 = r11.s64 + -29936;
	// b 0x831687d8
	sub_831687D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83168890"))) PPC_WEAK_FUNC(sub_83168890);
PPC_FUNC_IMPL(__imp__sub_83168890) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x831687d8
	sub_831687D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831688A0"))) PPC_WEAK_FUNC(sub_831688A0);
PPC_FUNC_IMPL(__imp__sub_831688A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29936
	ctx.r4.s64 = r11.s64 + -29936;
	// b 0x83168890
	sub_83168890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831688B0"))) PPC_WEAK_FUNC(sub_831688B0);
PPC_FUNC_IMPL(__imp__sub_831688B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831688C0"))) PPC_WEAK_FUNC(sub_831688C0);
PPC_FUNC_IMPL(__imp__sub_831688C0) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831688C8"))) PPC_WEAK_FUNC(sub_831688C8);
PPC_FUNC_IMPL(__imp__sub_831688C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x83168928
	if (!cr6.gt) goto loc_83168928;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
loc_831688E4:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_831688EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x83168910
	if (cr6.eq) goto loc_83168910;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831688ec
	if (cr6.eq) goto loc_831688EC;
loc_83168910:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83168928
	if (cr6.eq) goto loc_83168928;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// blt cr6,0x831688e4
	if (cr6.lt) goto loc_831688E4;
loc_83168928:
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168938"))) PPC_WEAK_FUNC(sub_83168938);
PPC_FUNC_IMPL(__imp__sub_83168938) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168940"))) PPC_WEAK_FUNC(sub_83168940);
PPC_FUNC_IMPL(__imp__sub_83168940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r24{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831689d0
	if (cr6.eq) goto loc_831689D0;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x831689d0
	if (!cr6.lt) goto loc_831689D0;
	// lhz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bgt cr6,0x83168a38
	if (cr6.gt) goto loc_83168A38;
	// lis r12,-31977
	r12.s64 = -2095644672;
	// addi r12,r12,-30304
	r12.s64 = r12.s64 + -30304;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_831689B8;
	case 1:
		goto loc_831689B8;
	case 2:
		goto loc_831689C0;
	case 3:
		goto loc_831689C0;
	case 4:
		goto loc_831689C8;
	case 5:
		goto loc_831689C8;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-30280(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30280);
	// lwz r24,-30280(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30280);
	// lwz r24,-30272(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30272);
	// lwz r24,-30272(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30272);
	// lwz r24,-30264(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30264);
	// lwz r24,-30264(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30264);
loc_831689B8:
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// blr 
	return;
loc_831689C0:
	// lbz r3,1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// blr 
	return;
loc_831689C8:
	// lbz r3,3(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// blr 
	return;
loc_831689D0:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168a38
	if (cr6.eq) goto loc_83168A38;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x83168a38
	if (cr6.gt) goto loc_83168A38;
	// lis r12,-31977
	r12.s64 = -2095644672;
	// addi r12,r12,-30208
	r12.s64 = r12.s64 + -30208;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_83168A18;
	case 1:
		goto loc_83168A18;
	case 2:
		goto loc_83168A20;
	case 3:
		goto loc_83168A20;
	case 4:
		goto loc_83168A2C;
	case 5:
		goto loc_83168A2C;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-30184(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30184);
	// lwz r24,-30184(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30184);
	// lwz r24,-30176(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30176);
	// lwz r24,-30176(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30176);
	// lwz r24,-30164(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30164);
	// lwz r24,-30164(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30164);
loc_83168A18:
	// lbz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// blr 
	return;
loc_83168A20:
	// lhz r11,24(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 24);
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
loc_83168A2C:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
loc_83168A38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168A40"))) PPC_WEAK_FUNC(sub_83168A40);
PPC_FUNC_IMPL(__imp__sub_83168A40) {
	PPC_FUNC_PROLOGUE();
	// b 0x83168940
	sub_83168940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83168A48"))) PPC_WEAK_FUNC(sub_83168A48);
PPC_FUNC_IMPL(__imp__sub_83168A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r24{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168af8
	if (cr6.eq) goto loc_83168AF8;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x83168af8
	if (!cr6.lt) goto loc_83168AF8;
	// lhz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bgt cr6,0x83168b5c
	if (cr6.gt) goto loc_83168B5C;
	// lis r12,-31977
	r12.s64 = -2095644672;
	// addi r12,r12,-30040
	r12.s64 = r12.s64 + -30040;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83168AC0;
	case 1:
		goto loc_83168AC0;
	case 2:
		goto loc_83168AC8;
	case 3:
		goto loc_83168AC8;
	case 4:
		goto loc_83168AE0;
	case 5:
		goto loc_83168AE0;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-30016(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30016);
	// lwz r24,-30016(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30016);
	// lwz r24,-30008(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30008);
	// lwz r24,-30008(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -30008);
	// lwz r24,-29984(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29984);
	// lwz r24,-29984(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29984);
loc_83168AC0:
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// blr 
	return;
loc_83168AC8:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// blr 
	return;
loc_83168AE0:
	// lbz r11,2(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// blr 
	return;
loc_83168AF8:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168b5c
	if (cr6.eq) goto loc_83168B5C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x83168b5c
	if (cr6.gt) goto loc_83168B5C;
	// lis r12,-31977
	r12.s64 = -2095644672;
	// addi r12,r12,-29912
	r12.s64 = r12.s64 + -29912;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_83168B40;
	case 1:
		goto loc_83168B40;
	case 2:
		goto loc_83168B48;
	case 3:
		goto loc_83168B48;
	case 4:
		goto loc_83168B50;
	case 5:
		goto loc_83168B50;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-29888(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29888);
	// lwz r24,-29888(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29888);
	// lwz r24,-29880(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29880);
	// lwz r24,-29880(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29880);
	// lwz r24,-29872(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29872);
	// lwz r24,-29872(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29872);
loc_83168B40:
	// lbz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// blr 
	return;
loc_83168B48:
	// lhz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 24);
	// blr 
	return;
loc_83168B50:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// clrlwi r3,r11,16
	ctx.r3.u64 = r11.u32 & 0xFFFF;
	// blr 
	return;
loc_83168B5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168B68"))) PPC_WEAK_FUNC(sub_83168B68);
PPC_FUNC_IMPL(__imp__sub_83168B68) {
	PPC_FUNC_PROLOGUE();
	// b 0x83168a48
	sub_83168A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83168B70"))) PPC_WEAK_FUNC(sub_83168B70);
PPC_FUNC_IMPL(__imp__sub_83168B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r24{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168c30
	if (cr6.eq) goto loc_83168C30;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x83168c30
	if (!cr6.lt) goto loc_83168C30;
	// lhz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r8,r7
	r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// bgt cr6,0x83168c90
	if (cr6.gt) goto loc_83168C90;
	// lis r12,-31977
	r12.s64 = -2095644672;
	// addi r12,r12,-29744
	r12.s64 = r12.s64 + -29744;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_83168BE8;
	case 1:
		goto loc_83168BE8;
	case 2:
		goto loc_83168BF0;
	case 3:
		goto loc_83168BF0;
	case 4:
		goto loc_83168C04;
	case 5:
		goto loc_83168C04;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-29720(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29720);
	// lwz r24,-29720(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29720);
	// lwz r24,-29712(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29712);
	// lwz r24,-29712(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29712);
	// lwz r24,-29692(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29692);
	// lwz r24,-29692(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29692);
loc_83168BE8:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// blr 
	return;
loc_83168BF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 | ctx.r9.u64;
	// blr 
	return;
loc_83168C04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r11,r3,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r11,r6
	ctx.r3.u64 = r11.u64 | ctx.r6.u64;
	// blr 
	return;
loc_83168C30:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168c90
	if (cr6.eq) goto loc_83168C90;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x83168c90
	if (cr6.gt) goto loc_83168C90;
	// lis r12,-31977
	r12.s64 = -2095644672;
	// addi r12,r12,-29600
	r12.s64 = r12.s64 + -29600;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_83168C78;
	case 1:
		goto loc_83168C78;
	case 2:
		goto loc_83168C80;
	case 3:
		goto loc_83168C80;
	case 4:
		goto loc_83168C88;
	case 5:
		goto loc_83168C88;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-29576(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29576);
	// lwz r24,-29576(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29576);
	// lwz r24,-29568(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29568);
	// lwz r24,-29568(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29568);
	// lwz r24,-29560(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29560);
	// lwz r24,-29560(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -29560);
loc_83168C78:
	// lbz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// blr 
	return;
loc_83168C80:
	// lhz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 24);
	// blr 
	return;
loc_83168C88:
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// blr 
	return;
loc_83168C90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168C98"))) PPC_WEAK_FUNC(sub_83168C98);
PPC_FUNC_IMPL(__imp__sub_83168C98) {
	PPC_FUNC_PROLOGUE();
	// b 0x83168b70
	sub_83168B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83168CA0"))) PPC_WEAK_FUNC(sub_83168CA0);
PPC_FUNC_IMPL(__imp__sub_83168CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168d38
	if (cr6.eq) goto loc_83168D38;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x83168d38
	if (!cr6.lt) goto loc_83168D38;
	// lhz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// mullw r11,r10,r4
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rldicr r7,r9,8,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rldicr r9,r4,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rldicr r4,r6,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r4,r5
	r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r9,r11,8,55
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 | ctx.r3.u64;
	// rldicr r5,r6,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rldicr r3,r4,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r3,r8
	r11.u64 = ctx.r3.u64 | ctx.r8.u64;
	// rldicr r10,r11,8,55
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 | ctx.r7.u64;
	// blr 
	return;
loc_83168D38:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168d4c
	if (cr6.eq) goto loc_83168D4C;
	// ld r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// blr 
	return;
loc_83168D4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168D58"))) PPC_WEAK_FUNC(sub_83168D58);
PPC_FUNC_IMPL(__imp__sub_83168D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r5,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168dc8
	if (cr6.eq) goto loc_83168DC8;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x83168dc8
	if (!cr6.lt) goto loc_83168DC8;
	// lhz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// mullw r11,r10,r4
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r6
	r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_83168DC8:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168ddc
	if (cr6.eq) goto loc_83168DDC;
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_83168DDC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168DE8"))) PPC_WEAK_FUNC(sub_83168DE8);
PPC_FUNC_IMPL(__imp__sub_83168DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168e60
	if (cr6.eq) goto loc_83168E60;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x83168e60
	if (!cr6.lt) goto loc_83168E60;
	// lhz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// mullw r11,r10,r4
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r11,r4,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r6
	ctx.r10.u64 = r11.u64 | ctx.r6.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r5
	r11.u64 = ctx.r9.u64 | ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83168e74
	if (cr6.eq) goto loc_83168E74;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
loc_83168E60:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83168e74
	if (cr6.eq) goto loc_83168E74;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// blr 
	return;
loc_83168E74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168E80"))) PPC_WEAK_FUNC(sub_83168E80);
PPC_FUNC_IMPL(__imp__sub_83168E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r11,r4,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83168eb8
	if (!cr6.eq) goto loc_83168EB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83168EB8:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168EC8"))) PPC_WEAK_FUNC(sub_83168EC8);
PPC_FUNC_IMPL(__imp__sub_83168EC8) {
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
	// lwz r31,40(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83168f0c
	if (cr6.eq) goto loc_83168F0C;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_83168EE8:
	// lbz r11,9(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83168f00
	if (cr6.eq) goto loc_83168F00;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8316c678
	sub_8316C678(ctx, base);
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
loc_83168F00:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// bne 0x83168ee8
	if (!cr0.eq) goto loc_83168EE8;
loc_83168F0C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83168F18"))) PPC_WEAK_FUNC(sub_83168F18);
PPC_FUNC_IMPL(__imp__sub_83168F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r24{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r5,11
	cr6.compare<uint32_t>(ctx.r5.u32, 11, xer);
	// stb r5,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r5.u8);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31977
	r12.s64 = -2095644672;
	// addi r12,r12,-28868
	r12.s64 = r12.s64 + -28868;
	// rlwinm r0,r5,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_83168F6C;
	case 1:
		goto loc_83168F6C;
	case 2:
		goto loc_83168F78;
	case 3:
		goto loc_83168F78;
	case 4:
		goto loc_83168F90;
	case 5:
		goto loc_83168F90;
	case 6:
		goto loc_83168FC0;
	case 7:
		goto loc_83168FC0;
	case 8:
		goto loc_83169020;
	case 9:
		goto loc_83169058;
	case 10:
		goto loc_831690C0;
	case 11:
		goto loc_83169108;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-28820(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28820);
	// lwz r24,-28820(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28820);
	// lwz r24,-28808(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28808);
	// lwz r24,-28808(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28808);
	// lwz r24,-28784(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28784);
	// lwz r24,-28784(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28784);
	// lwz r24,-28736(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28736);
	// lwz r24,-28736(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28736);
	// lwz r24,-28640(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28640);
	// lwz r24,-28584(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28584);
	// lwz r24,-28480(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28480);
	// lwz r24,-28408(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -28408);
loc_83168F6C:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,8(r6)
	PPC_STORE_U8(ctx.r6.u32 + 8, r11.u8);
	// blr 
	return;
loc_83168F78:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r8,8(r6)
	PPC_STORE_U16(ctx.r6.u32 + 8, ctx.r8.u16);
	// blr 
	return;
loc_83168F90:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r11,r3,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r7
	ctx.r10.u64 = r11.u64 | ctx.r7.u64;
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_83168FC0:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rldicr r9,r11,8,63
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rldicr r10,r5,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r5,7(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// or r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rldicr r10,r4,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rldicr r7,r8,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r4,r7,r3
	ctx.r4.u64 = ctx.r7.u64 | ctx.r3.u64;
	// rldicr r3,r4,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r3,r11
	r11.u64 = ctx.r3.u64 | r11.u64;
	// rldicr r10,r11,8,55
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rldicr r8,r9,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 | ctx.r5.u64;
	// std r7,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
	// blr 
	return;
loc_83169020:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r11,r3,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r7
	ctx.r10.u64 = r11.u64 | ctx.r7.u64;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
loc_83169058:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rldicr r9,r11,8,63
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rldicr r10,r5,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r5,7(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// or r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rldicr r10,r4,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rldicr r7,r8,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r4,r7,r3
	ctx.r4.u64 = ctx.r7.u64 | ctx.r3.u64;
	// rldicr r3,r4,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r3,r11
	r11.u64 = ctx.r3.u64 | r11.u64;
	// rldicr r10,r11,8,55
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rldicr r8,r9,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 | ctx.r5.u64;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stfd f0,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, f0.u64);
	// blr 
	return;
loc_831690C0:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r7
	r11.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831690f8
	if (!cr6.eq) goto loc_831690F8;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// blr 
	return;
loc_831690F8:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// blr 
	return;
loc_83169108:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r8
	r11.u64 = ctx.r3.u64 | ctx.r8.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r7
	r11.u64 = ctx.r9.u64 | ctx.r7.u64;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// lbz r7,5(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r5,6(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r3,7(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stw r4,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169170"))) PPC_WEAK_FUNC(sub_83169170);
PPC_FUNC_IMPL(__imp__sub_83169170) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x831691a4
	if (cr6.lt) goto loc_831691A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31016
	ctx.r4.s64 = r11.s64 + 31016;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831691A4:
	// addi r11,r30,6
	r11.s64 = r30.s64 + 6;
	// rlwinm r29,r11,3,0,28
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831691d0
	if (!cr6.eq) goto loc_831691D0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,30988
	ctx.r4.s64 = r11.s64 + 30988;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831691D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r29,r31
	PPC_STORE_U32(r29.u32 + r31.u32, ctx.r8.u32);
	// stw r10,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831691F8"))) PPC_WEAK_FUNC(sub_831691F8);
PPC_FUNC_IMPL(__imp__sub_831691F8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r4,6
	ctx.r10.s64 = ctx.r4.s64 + 6;
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r24,44(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lwzx r26,r8,r29
	r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + r29.u32);
	// bl 0x83168938
	sub_83168938(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r7,r28,-1
	ctx.r7.s64 = r28.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r30,r7,31,1,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r31,r25
	r31.u64 = r25.u64;
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + r26.u32);
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
loc_83169250:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// beq cr6,0x83169274
	if (cr6.eq) goto loc_83169274;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83169250
	if (cr6.eq) goto loc_83169250;
loc_83169274:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831692e8
	if (cr6.eq) goto loc_831692E8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
loc_83169280:
	// ble cr6,0x8316928c
	if (!cr6.gt) goto loc_8316928C;
	// mr r28,r30
	r28.u64 = r30.u64;
	// b 0x83169290
	goto loc_83169290;
loc_8316928C:
	// addi r27,r30,1
	r27.s64 = r30.s64 + 1;
loc_83169290:
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// beq cr6,0x831692f8
	if (cr6.eq) goto loc_831692F8;
	// add r11,r28,r27
	r11.u64 = r28.u64 + r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r30,r11,31,1,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r31,r25
	r31.u64 = r25.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
loc_831692BC:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// beq cr6,0x831692e0
	if (cr6.eq) goto loc_831692E0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831692bc
	if (cr6.eq) goto loc_831692BC;
loc_831692E0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83169280
	if (!cr6.eq) goto loc_83169280;
loc_831692E8:
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_831692F8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83169308"))) PPC_WEAK_FUNC(sub_83169308);
PPC_FUNC_IMPL(__imp__sub_83169308) {
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
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83169330
	if (cr6.eq) goto loc_83169330;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
loc_83169330:
	// li r31,0
	r31.s64 = 0;
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
loc_83169338:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83169350
	if (cr6.eq) goto loc_83169350;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83169170
	sub_83169170(ctx, base);
loc_83169350:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x83169338
	if (cr6.lt) goto loc_83169338;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83169378"))) PPC_WEAK_FUNC(sub_83169378);
PPC_FUNC_IMPL(__imp__sub_83169378) {
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
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831693dc
	if (cr6.eq) goto loc_831693DC;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x831693dc
	if (!cr6.lt) goto loc_831693DC;
	// lhz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r9,r8
	r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x83168f18
	sub_83168F18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_831693DC:
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169408"))) PPC_WEAK_FUNC(sub_83169408);
PPC_FUNC_IMPL(__imp__sub_83169408) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// li r26,0
	r26.s64 = 0;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r25,r11
	r25.u64 = r11.u64;
	// stb r9,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r9.u8);
	// rlwinm r27,r11,0,26,26
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8316946c
	if (cr6.eq) goto loc_8316946C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83168e80
	sub_83168E80(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8316c678
	sub_8316C678(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// b 0x83169470
	goto loc_83169470;
loc_8316946C:
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
loc_83169470:
	// rlwinm r11,r27,0,24,26
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831694a0
	if (cr6.eq) goto loc_831694A0;
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83168f18
	sub_83168F18(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8316c678
	sub_8316C678(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// b 0x831694ac
	goto loc_831694AC;
loc_831694A0:
	// li r11,255
	r11.s64 = 255;
	// std r26,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r26.u64);
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_831694AC:
	// rlwinm r11,r25,0,25,25
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x40;
	// subf r3,r29,r30
	ctx.r3.s64 = r30.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831694cc
	if (cr6.eq) goto loc_831694CC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,9(r31)
	PPC_STORE_U8(r31.u32 + 9, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_831694CC:
	// stb r26,9(r31)
	PPC_STORE_U8(r31.u32 + 9, r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_831694D8"))) PPC_WEAK_FUNC(sub_831694D8);
PPC_FUNC_IMPL(__imp__sub_831694D8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lhz r26,34(r31)
	r26.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831695d8
	if (cr6.eq) goto loc_831695D8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x831695d8
	if (!cr6.eq) goto loc_831695D8;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,44
	ctx.r10.s64 = r31.s64 + 44;
loc_83169524:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x831695b8
	if (cr6.eq) goto loc_831695B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x83169524
	if (cr6.lt) goto loc_83169524;
loc_83169540:
	// lwz r28,36(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x831695dc
	if (cr6.eq) goto loc_831695DC;
	// add r30,r9,r8
	r30.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_83169554:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168f18
	sub_83168F18(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r27
	r11.u64 = r27.u64;
loc_83169570:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x83169594
	if (cr6.eq) goto loc_83169594;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83169570
	if (cr6.eq) goto loc_83169570;
loc_83169594:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831695dc
	if (cr6.eq) goto loc_831695DC;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x83169554
	if (cr6.lt) goto loc_83169554;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
loc_831695B8:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bge cr6,0x83169540
	if (!cr6.lt) goto loc_83169540;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831691f8
	sub_831691F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
loc_831695D8:
	// li r29,-1
	r29.s64 = -1;
loc_831695DC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831695E8"))) PPC_WEAK_FUNC(sub_831695E8);
PPC_FUNC_IMPL(__imp__sub_831695E8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lhz r27,34(r31)
	r27.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8316967c
	if (cr6.eq) goto loc_8316967C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8316967c
	if (!cr6.eq) goto loc_8316967C;
	// lwz r28,36(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83169670
	if (cr6.eq) goto loc_83169670;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_83169640:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168f18
	sub_83168F18(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// beq cr6,0x83169670
	if (cr6.eq) goto loc_83169670;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x83169640
	if (cr6.lt) goto loc_83169640;
loc_83169670:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
loc_8316967C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83169688"))) PPC_WEAK_FUNC(sub_83169688);
PPC_FUNC_IMPL(__imp__sub_83169688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r24{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-29656
	ctx.r10.s64 = r11.s64 + -29656;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r30,-29656(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -29656);
	// lwz r31,4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bgt cr6,0x8316981c
	if (cr6.gt) goto loc_8316981C;
	// lis r12,-31977
	r12.s64 = -2095644672;
	// addi r12,r12,-26888
	r12.s64 = r12.s64 + -26888;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83169724;
	case 1:
		goto loc_83169744;
	case 2:
		goto loc_83169768;
	case 3:
		goto loc_83169784;
	case 4:
		goto loc_831697A8;
	case 5:
		goto loc_831697C8;
	case 6:
		goto loc_831697E4;
	case 7:
		goto loc_831697E4;
	case 8:
		goto loc_83169800;
	case 9:
		goto loc_83169828;
	case 10:
		goto loc_83169840;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-26844(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -26844);
	// lwz r24,-26812(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -26812);
	// lwz r24,-26776(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -26776);
	// lwz r24,-26748(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -26748);
	// lwz r24,-26712(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -26712);
	// lwz r24,-26680(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -26680);
	// lwz r24,-26652(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -26652);
	// lwz r24,-26652(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -26652);
	// lwz r24,-26624(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -26624);
	// lwz r24,-26584(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -26584);
	// lwz r24,-26560(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -26560);
loc_83169724:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x8316975c
	if (cr6.lt) goto loc_8316975C;
loc_83169734:
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r3,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
loc_83169744:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x83169814
	if (!cr6.lt) goto loc_83169814;
loc_8316975C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
loc_83169768:
	// lhz r11,104(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x83169734
	if (!cr6.lt) goto loc_83169734;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
loc_83169784:
	// lhz r11,104(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x83169814
	if (!cr6.lt) goto loc_83169814;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
loc_831697A8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8316975c
	if (cr6.lt) goto loc_8316975C;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
loc_831697C8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83169814
	if (!cr6.lt) goto loc_83169814;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
loc_831697E4:
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(r11.s64, ctx.r10.s64, xer);
	// bge cr6,0x83169814
	if (!cr6.lt) goto loc_83169814;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
loc_83169800:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8316975c
	if (cr6.lt) goto loc_8316975C;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
loc_83169814:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bgt cr6,0x83169820
	if (cr6.gt) goto loc_83169820;
loc_8316981C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83169820:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
loc_83169828:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8316975c
	if (cr6.lt) goto loc_8316975C;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// b 0x83169814
	goto loc_83169814;
loc_83169840:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_83169868:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x83169820
	if (cr6.eq) goto loc_83169820;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83169868
	if (cr6.eq) goto loc_83169868;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83169898"))) PPC_WEAK_FUNC(sub_83169898);
PPC_FUNC_IMPL(__imp__sub_83169898) {
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
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x831698d0
	if (cr6.lt) goto loc_831698D0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31132
	ctx.r4.s64 = r11.s64 + 31132;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_831698D0:
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r31
	r28.u64 = r11.u64 + r31.u64;
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x83169900
	if (cr6.eq) goto loc_83169900;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31100
	ctx.r4.s64 = r11.s64 + 31100;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83169900:
	// addi r11,r4,6
	r11.s64 = ctx.r4.s64 + 6;
	// rlwinm r29,r11,3,0,28
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83169930
	if (cr6.eq) goto loc_83169930;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31072
	ctx.r4.s64 = r11.s64 + 31072;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83169930:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168938
	sub_83168938(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,31056
	ctx.r5.s64 = r11.s64 + 31056;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// stwx r3,r29,r31
	PPC_STORE_U32(r29.u32 + r31.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83169980
	if (!cr6.eq) goto loc_83169980;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,31044
	ctx.r4.s64 = r11.s64 + 31044;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83169980:
	// stw r27,44(r28)
	PPC_STORE_U32(r28.u32 + 44, r27.u32);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831699ac
	if (cr6.eq) goto loc_831699AC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83169994:
	// lwzx r9,r29,r31
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x83169994
	if (cr6.lt) goto loc_83169994;
loc_831699AC:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,-29652
	ctx.r9.s64 = r11.s64 + -29652;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r10,-27000
	ctx.r6.s64 = ctx.r10.s64 + -27000;
	// stw r27,-29652(r11)
	PPC_STORE_U32(r11.u32 + -29652, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r31,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, r31.u32);
	// bl 0x831b5ec0
	sub_831B5EC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831699E0"))) PPC_WEAK_FUNC(sub_831699E0);
PPC_FUNC_IMPL(__imp__sub_831699E0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r9,r11,30896
	ctx.r9.s64 = r11.s64 + 30896;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r9,-29660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29660, ctx.r9.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r5,r8,31256
	ctx.r5.s64 = ctx.r8.s64 + 31256;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83169a4c
	if (!cr6.eq) goto loc_83169A4C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,31044
	ctx.r4.s64 = r11.s64 + 31044;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
loc_83169A4C:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8316c6f0
	sub_8316C6F0(ctx, base);
	// lis r11,16469
	r11.s64 = 1079312384;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// ori r9,r11,21574
	ctx.r9.u64 = r11.u64 | 21574;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83169aac
	if (cr6.eq) goto loc_83169AAC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31204
	ctx.r4.s64 = r11.s64 + 31204;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
loc_83169AAC:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// ble cr6,0x83169ae0
	if (!cr6.gt) goto loc_83169AE0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31180
	ctx.r4.s64 = r11.s64 + 31180;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
loc_83169AE0:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x8316c758
	sub_8316C758(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r5,r9,31172
	ctx.r5.s64 = ctx.r9.s64 + 31172;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// stw r4,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lhz r11,112(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// sth r11,32(r31)
	PPC_STORE_U16(r31.u32 + 32, r11.u16);
	// rotlwi r4,r10,5
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// lhz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// sth r9,34(r31)
	PPC_STORE_U16(r31.u32 + 34, ctx.r9.u16);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// bl 0x83168098
	sub_83168098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// bne cr6,0x83169ba0
	if (!cr6.eq) goto loc_83169BA0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,31160
	ctx.r4.s64 = r11.s64 + 31160;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
loc_83169BA0:
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// li r27,0
	r27.s64 = 0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83169bfc
	if (cr6.eq) goto loc_83169BFC;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_83169BB8:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + r11.u64;
	// bl 0x83169408
	sub_83169408(ctx, base);
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168ec8
	sub_83168EC8(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// sth r3,10(r9)
	PPC_STORE_U16(ctx.r9.u32 + 10, ctx.r3.u16);
	// lhz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x83169bb8
	if (cr6.lt) goto loc_83169BB8;
loc_83169BFC:
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_83169C08:
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x83169c08
	if (!cr0.eq) goto loc_83169C08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83169C28"))) PPC_WEAK_FUNC(sub_83169C28);
PPC_FUNC_IMPL(__imp__sub_83169C28) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x831699e0
	sub_831699E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169C38"))) PPC_WEAK_FUNC(sub_83169C38);
PPC_FUNC_IMPL(__imp__sub_83169C38) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x83167f20
	sub_83167F20(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83169c7c
	if (!cr6.eq) goto loc_83169C7C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31264
	ctx.r4.s64 = r11.s64 + 31264;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83169c9c
	goto loc_83169C9C;
loc_83169C7C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r3,44
	r11.s64 = ctx.r3.s64 + 44;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83169c90
	if (!cr6.eq) goto loc_83169C90;
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
loc_83169C90:
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
loc_83169C9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169CB8"))) PPC_WEAK_FUNC(sub_83169CB8);
PPC_FUNC_IMPL(__imp__sub_83169CB8) {
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
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83169cf4
	if (!cr6.eq) goto loc_83169CF4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31292
	ctx.r4.s64 = r11.s64 + 31292;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83169d38
	goto loc_83169D38;
loc_83169CF4:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83169d04
	if (cr6.eq) goto loc_83169D04;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_83169D04:
	// lwz r31,40(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83169d34
	if (cr6.eq) goto loc_83169D34;
	// bl 0x83168778
	sub_83168778(ctx, base);
loc_83169D34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83169D38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169D50"))) PPC_WEAK_FUNC(sub_83169D50);
PPC_FUNC_IMPL(__imp__sub_83169D50) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83169d90
	if (cr6.eq) goto loc_83169D90;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_83169D90:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r31,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r31.u32);
	// beq cr6,0x83169dac
	if (cr6.eq) goto loc_83169DAC;
	// bl 0x83168778
	sub_83168778(ctx, base);
loc_83169DAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169DC8"))) PPC_WEAK_FUNC(sub_83169DC8);
PPC_FUNC_IMPL(__imp__sub_83169DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83169DD8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83169dd8
	if (!cr6.eq) goto loc_83169DD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169DF0"))) PPC_WEAK_FUNC(sub_83169DF0);
PPC_FUNC_IMPL(__imp__sub_83169DF0) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83169e14
	if (!cr6.eq) goto loc_83169E14;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31304
	ctx.r4.s64 = r11.s64 + 31304;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83169E14:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83169e24
	if (cr6.eq) goto loc_83169E24;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_83169E24:
	// addi r31,r30,20
	r31.s64 = r30.s64 + 20;
	// li r29,4
	r29.s64 = 4;
	// li r28,0
	r28.s64 = 0;
loc_83169E30:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83169e58
	if (cr6.eq) goto loc_83169E58;
loc_83169E3C:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83169d50
	sub_83169D50(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83169e3c
	if (!cr6.eq) goto loc_83169E3C;
loc_83169E58:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x83169e30
	if (!cr0.eq) goto loc_83169E30;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83169e78
	if (cr6.eq) goto loc_83169E78;
	// bl 0x83168778
	sub_83168778(ctx, base);
loc_83169E78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83169E80"))) PPC_WEAK_FUNC(sub_83169E80);
PPC_FUNC_IMPL(__imp__sub_83169E80) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83169eec
	if (cr6.eq) goto loc_83169EEC;
	// bl 0x8316a508
	sub_8316A508(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83169eb4
	if (cr6.eq) goto loc_83169EB4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_83169EB4:
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83169ec8
	if (cr6.eq) goto loc_83169EC8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
loc_83169EC8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83169eec
	if (cr6.eq) goto loc_83169EEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83168778
	sub_83168778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83168748
	sub_83168748(ctx, base);
loc_83169EEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83169EF8"))) PPC_WEAK_FUNC(sub_83169EF8);
PPC_FUNC_IMPL(__imp__sub_83169EF8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83169f5c
	if (cr6.eq) goto loc_83169F5C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83169f5c
	if (cr6.lt) goto loc_83169F5C;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x83169f5c
	if (!cr6.lt) goto loc_83169F5C;
	// addi r11,r4,5
	r11.s64 = ctx.r4.s64 + 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83169f48
	if (cr6.eq) goto loc_83169F48;
loc_83169F34:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83169f34
	if (!cr6.eq) goto loc_83169F34;
loc_83169F48:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83169F5C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31316
	ctx.r4.s64 = r11.s64 + 31316;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
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

__attribute__((alias("__imp__sub_83169F80"))) PPC_WEAK_FUNC(sub_83169F80);
PPC_FUNC_IMPL(__imp__sub_83169F80) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8316a05c
	if (cr6.eq) goto loc_8316A05C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8316a05c
	if (cr6.lt) goto loc_8316A05C;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x8316a05c
	if (!cr6.lt) goto loc_8316A05C;
	// addi r11,r4,5
	r11.s64 = ctx.r4.s64 + 5;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r28,r30
	r31.u64 = PPC_LOAD_U32(r28.u32 + r30.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8316a06c
	if (cr6.eq) goto loc_8316A06C;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83169fd4
	if (cr6.eq) goto loc_83169FD4;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_83169FD4:
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bgt cr6,0x8316a004
	if (cr6.gt) goto loc_8316A004;
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stwx r11,r28,r30
	PPC_STORE_U32(r28.u32 + r30.u32, r11.u32);
	// bl 0x83169d50
	sub_83169D50(ctx, base);
	// b 0x8316a044
	goto loc_8316A044;
loc_8316A004:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8316a038
	if (!cr6.eq) goto loc_8316A038;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316a538
	sub_8316A538(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// b 0x8316a044
	goto loc_8316A044;
loc_8316A038:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8316A044:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316a078
	if (cr6.eq) goto loc_8316A078;
	// bl 0x83168778
	sub_83168778(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8316A05C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31316
	ctx.r4.s64 = r11.s64 + 31316;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316A06C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8316A078:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316A080"))) PPC_WEAK_FUNC(sub_8316A080);
PPC_FUNC_IMPL(__imp__sub_8316A080) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8316a190
	if (cr6.eq) goto loc_8316A190;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8316a190
	if (cr6.lt) goto loc_8316A190;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// bge cr6,0x8316a190
	if (!cr6.lt) goto loc_8316A190;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8316a1a0
	if (!cr6.gt) goto loc_8316A1A0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8316a1a0
	if (cr6.eq) goto loc_8316A1A0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316a0d8
	if (cr6.eq) goto loc_8316A0D8;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_8316A0D8:
	// addi r11,r31,5
	r11.s64 = r31.s64 + 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8316a108
	if (cr6.eq) goto loc_8316A108;
loc_8316A0F4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8316a0f4
	if (!cr6.eq) goto loc_8316A0F4;
loc_8316A108:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8316a144
	if (!cr6.eq) goto loc_8316A144;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8316a144
	if (cr6.eq) goto loc_8316A144;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8316a144
	if (!cr6.eq) goto loc_8316A144;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// b 0x8316a178
	goto loc_8316A178;
loc_8316A144:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83169cb8
	sub_83169CB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316a164
	if (!cr6.eq) goto loc_8316A164;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31328
	ctx.r4.s64 = r11.s64 + 31328;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x8316a178
	goto loc_8316A178;
loc_8316A164:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8316A178:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316a1a0
	if (cr6.eq) goto loc_8316A1A0;
	// bl 0x83168778
	sub_83168778(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8316A190:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31316
	ctx.r4.s64 = r11.s64 + 31316;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316A1A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316A1A8"))) PPC_WEAK_FUNC(sub_8316A1A8);
PPC_FUNC_IMPL(__imp__sub_8316A1A8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8316a294
	if (cr6.eq) goto loc_8316A294;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x8316a294
	if (cr6.lt) goto loc_8316A294;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// bge cr6,0x8316a294
	if (!cr6.lt) goto loc_8316A294;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8316a2a4
	if (!cr6.gt) goto loc_8316A2A4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8316a2a4
	if (cr6.eq) goto loc_8316A2A4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316a200
	if (cr6.eq) goto loc_8316A200;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_8316A200:
	// addi r11,r29,5
	r11.s64 = r29.s64 + 5;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// bne cr6,0x8316a250
	if (!cr6.eq) goto loc_8316A250;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8316a250
	if (cr6.eq) goto loc_8316A250;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8316a250
	if (!cr6.eq) goto loc_8316A250;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x8316a27c
	goto loc_8316A27C;
loc_8316A250:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83169cb8
	sub_83169CB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316a2a4
	if (cr6.eq) goto loc_8316A2A4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwzx r9,r29,r30
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stwx r3,r29,r30
	PPC_STORE_U32(r29.u32 + r30.u32, ctx.r3.u32);
loc_8316A27C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316a2a4
	if (cr6.eq) goto loc_8316A2A4;
	// bl 0x83168778
	sub_83168778(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8316A294:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31316
	ctx.r4.s64 = r11.s64 + 31316;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316A2A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316A2B0"))) PPC_WEAK_FUNC(sub_8316A2B0);
PPC_FUNC_IMPL(__imp__sub_8316A2B0) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83169c38
	sub_83169C38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A2E8"))) PPC_WEAK_FUNC(sub_8316A2E8);
PPC_FUNC_IMPL(__imp__sub_8316A2E8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8316a328
	if (!cr6.eq) goto loc_8316A328;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31500
	ctx.r4.s64 = r11.s64 + 31500;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_8316A328:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8316a34c
	if (!cr6.eq) goto loc_8316A34C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31472
	ctx.r4.s64 = r11.s64 + 31472;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_8316A34C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r26,r11,31460
	r26.s64 = r11.s64 + 31460;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8316a390
	if (!cr6.eq) goto loc_8316A390;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31448
	ctx.r4.s64 = r11.s64 + 31448;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_8316A390:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,-15140
	ctx.r10.s64 = r11.s64 + -15140;
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8316a404
	if (!cr6.eq) goto loc_8316A404;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x83168880
	sub_83168880(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x8316a408
	if (!cr6.eq) goto loc_8316A408;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31400
	ctx.r4.s64 = r11.s64 + 31400;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_8316A404:
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
loc_8316A408:
	// stw r25,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r25.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// addi r5,r11,31380
	ctx.r5.s64 = r11.s64 + 31380;
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x83168098
	sub_83168098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// bne cr6,0x8316a480
	if (!cr6.eq) goto loc_8316A480;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31340
	ctx.r4.s64 = r11.s64 + 31340;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316a468
	if (cr6.eq) goto loc_8316A468;
	// bl 0x83168748
	sub_83168748(ctx, base);
loc_8316A468:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_8316A480:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8316a4a4
	if (cr6.eq) goto loc_8316A4A4;
loc_8316A488:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + r11.u64;
	// bl 0x83169d50
	sub_83169D50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x8316a488
	if (!cr0.eq) goto loc_8316A488;
loc_8316A4A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8316A4B0"))) PPC_WEAK_FUNC(sub_8316A4B0);
PPC_FUNC_IMPL(__imp__sub_8316A4B0) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8316a2e8
	sub_8316A2E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A4E8"))) PPC_WEAK_FUNC(sub_8316A4E8);
PPC_FUNC_IMPL(__imp__sub_8316A4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r8,r10,31528
	ctx.r8.s64 = ctx.r10.s64 + 31528;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,-29648(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29648, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8316A508"))) PPC_WEAK_FUNC(sub_8316A508);
PPC_FUNC_IMPL(__imp__sub_8316A508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8316A518"))) PPC_WEAK_FUNC(sub_8316A518);
PPC_FUNC_IMPL(__imp__sub_8316A518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8316A528"))) PPC_WEAK_FUNC(sub_8316A528);
PPC_FUNC_IMPL(__imp__sub_8316A528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8316A538"))) PPC_WEAK_FUNC(sub_8316A538);
PPC_FUNC_IMPL(__imp__sub_8316A538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// ble cr6,0x8316a560
	if (!cr6.gt) goto loc_8316A560;
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
loc_8316A560:
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// bne 0x8316a580
	if (!cr0.eq) goto loc_8316A580;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
loc_8316A580:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A598"))) PPC_WEAK_FUNC(sub_8316A598);
PPC_FUNC_IMPL(__imp__sub_8316A598) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8316a518
	sub_8316A518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A5A8"))) PPC_WEAK_FUNC(sub_8316A5A8);
PPC_FUNC_IMPL(__imp__sub_8316A5A8) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8316a5d0
	if (!cr6.gt) goto loc_8316A5D0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8316A5D0:
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8316a538
	sub_8316A538(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8315dee8
	sub_8315DEE8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316a528
	sub_8316A528(ctx, base);
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

__attribute__((alias("__imp__sub_8316A620"))) PPC_WEAK_FUNC(sub_8316A620);
PPC_FUNC_IMPL(__imp__sub_8316A620) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8315def8
	sub_8315DEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A628"))) PPC_WEAK_FUNC(sub_8316A628);
PPC_FUNC_IMPL(__imp__sub_8316A628) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8316a518
	sub_8316A518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A638"))) PPC_WEAK_FUNC(sub_8316A638);
PPC_FUNC_IMPL(__imp__sub_8316A638) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8316a660
	if (!cr6.gt) goto loc_8316A660;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8316A660:
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8316a538
	sub_8316A538(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8315dee8
	sub_8315DEE8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316a528
	sub_8316A528(ctx, base);
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

__attribute__((alias("__imp__sub_8316A6B0"))) PPC_WEAK_FUNC(sub_8316A6B0);
PPC_FUNC_IMPL(__imp__sub_8316A6B0) {
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
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8316a6f8
	if (!cr6.eq) goto loc_8316A6F8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31756
	ctx.r4.s64 = r11.s64 + 31756;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_8316A6F8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r28,r11,31744
	r28.s64 = r11.s64 + 31744;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8316a73c
	if (!cr6.eq) goto loc_8316A73C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31732
	ctx.r4.s64 = r11.s64 + 31732;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_8316A73C:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r10,r11,-15116
	ctx.r10.s64 = r11.s64 + -15116;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8316a7ac
	if (!cr6.eq) goto loc_8316A7AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168880
	sub_83168880(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x8316a7b4
	if (!cr6.eq) goto loc_8316A7B4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31684
	ctx.r4.s64 = r11.s64 + 31684;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_8316A7AC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8316A7B4:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r4,r27,r26
	ctx.r4.u64 = r27.u64 + r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316a80c
	if (!cr6.eq) goto loc_8316A80C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31620
	ctx.r4.s64 = r11.s64 + 31620;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316a7f4
	if (cr6.eq) goto loc_8316A7F4;
	// bl 0x83168748
	sub_83168748(ctx, base);
loc_8316A7F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_8316A80C:
	// stw r27,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r26.u32);
	// bl 0x8316a508
	sub_8316A508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8316A828"))) PPC_WEAK_FUNC(sub_8316A828);
PPC_FUNC_IMPL(__imp__sub_8316A828) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x83167f20
	sub_83167F20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83167f20
	sub_83167F20(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8316a87c
	if (!cr6.eq) goto loc_8316A87C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31784
	ctx.r4.s64 = r11.s64 + 31784;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8316A87C:
	// add r11,r3,r28
	r11.u64 = ctx.r3.u64 + r28.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bne cr6,0x8316a89c
	if (!cr6.eq) goto loc_8316A89C;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
loc_8316A89C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316A8A8"))) PPC_WEAK_FUNC(sub_8316A8A8);
PPC_FUNC_IMPL(__imp__sub_8316A8A8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8316a908
	if (cr6.eq) goto loc_8316A908;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8316a8d8
	if (cr6.eq) goto loc_8316A8D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_8316A8D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8316a908
	if (cr6.eq) goto loc_8316A908;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83168778
	sub_83168778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83168748
	sub_83168748(ctx, base);
loc_8316A908:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316A910"))) PPC_WEAK_FUNC(sub_8316A910);
PPC_FUNC_IMPL(__imp__sub_8316A910) {
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
	// bne cr6,0x8316a94c
	if (!cr6.eq) goto loc_8316A94C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31304
	ctx.r4.s64 = r11.s64 + 31304;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8316A94C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316a95c
	if (cr6.eq) goto loc_8316A95C;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_8316A95C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r11,0
	r11.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// beq cr6,0x8316a994
	if (cr6.eq) goto loc_8316A994;
	// bl 0x83168778
	sub_83168778(ctx, base);
loc_8316A994:
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

__attribute__((alias("__imp__sub_8316A9A8"))) PPC_WEAK_FUNC(sub_8316A9A8);
PPC_FUNC_IMPL(__imp__sub_8316A9A8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316a9c8
	if (!cr6.eq) goto loc_8316A9C8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31304
	ctx.r4.s64 = r11.s64 + 31304;
	// b 0x8316aa08
	goto loc_8316AA08;
loc_8316A9C8:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8316a9e4
	if (!cr6.eq) goto loc_8316A9E4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8316A9E4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8316aa00
	if (!cr6.eq) goto loc_8316AA00;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8316AA00:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31812
	ctx.r4.s64 = r11.s64 + 31812;
loc_8316AA08:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
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

__attribute__((alias("__imp__sub_8316AA28"))) PPC_WEAK_FUNC(sub_8316AA28);
PPC_FUNC_IMPL(__imp__sub_8316AA28) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8316aa60
	if (!cr6.eq) goto loc_8316AA60;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31304
	ctx.r4.s64 = r11.s64 + 31304;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8316AA60:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8316aa84
	if (!cr6.eq) goto loc_8316AA84;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31812
	ctx.r4.s64 = r11.s64 + 31812;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8316AA84:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316aa94
	if (cr6.eq) goto loc_8316AA94;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_8316AA94:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x8316ab24
	if (!cr6.eq) goto loc_8316AB24;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8316aac0
	if (cr6.lt) goto loc_8316AAC0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8316AAC0:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// blt cr6,0x8316aad0
	if (cr6.lt) goto loc_8316AAD0;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8316AAD0:
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// divwu r6,r7,r9
	ctx.r6.u32 = ctx.r7.u32 / ctx.r9.u32;
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r3,r8
	r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// b 0x8316abd0
	goto loc_8316ABD0;
loc_8316AB24:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x8316abb4
	if (!cr6.eq) goto loc_8316ABB4;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8316ab50
	if (cr6.lt) goto loc_8316AB50;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8316AB50:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// blt cr6,0x8316ab60
	if (cr6.lt) goto loc_8316AB60;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8316AB60:
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// divwu r5,r6,r7
	ctx.r5.u32 = ctx.r6.u32 / ctx.r7.u32;
	// mullw r4,r5,r7
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r3,r4,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r4.s64;
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - r11.s64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// b 0x8316abd0
	goto loc_8316ABD0;
loc_8316ABB4:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r4,r10,31812
	ctx.r4.s64 = ctx.r10.s64 + 31812;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316ABD0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316abe0
	if (cr6.eq) goto loc_8316ABE0;
	// bl 0x83168778
	sub_83168778(ctx, base);
loc_8316ABE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316ABE8"))) PPC_WEAK_FUNC(sub_8316ABE8);
PPC_FUNC_IMPL(__imp__sub_8316ABE8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8316ac18
	if (!cr6.eq) goto loc_8316AC18;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31304
	ctx.r4.s64 = r11.s64 + 31304;
	// b 0x8316ad68
	goto loc_8316AD68;
loc_8316AC18:
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8316ac30
	if (!cr6.eq) goto loc_8316AC30;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31812
	ctx.r4.s64 = r11.s64 + 31812;
	// b 0x8316ad68
	goto loc_8316AD68;
loc_8316AC30:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8316ad70
	if (cr6.eq) goto loc_8316AD70;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8316ad70
	if (cr6.eq) goto loc_8316AD70;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8316ad08
	if (!cr6.eq) goto loc_8316AD08;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// subf r11,r9,r8
	r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8316ac84
	if (!cr6.lt) goto loc_8316AC84;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// blt cr6,0x8316ac74
	if (cr6.lt) goto loc_8316AC74;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8316AC74:
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_8316AC84:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r8,r3,r11
	ctx.r8.s64 = r11.s64 - ctx.r3.s64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x8316acc4
	if (!cr6.gt) goto loc_8316ACC4;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8316acb4
	if (cr6.lt) goto loc_8316ACB4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8316ACB4:
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - r11.s64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_8316ACC4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316acd4
	if (cr6.eq) goto loc_8316ACD4;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_8316ACD4:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// beq cr6,0x8316ad70
	if (cr6.eq) goto loc_8316AD70;
	// bl 0x83168778
	sub_83168778(ctx, base);
	// b 0x8316ad70
	goto loc_8316AD70;
loc_8316AD08:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8316ad54
	if (!cr6.eq) goto loc_8316AD54;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316ad20
	if (cr6.eq) goto loc_8316AD20;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_8316AD20:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// beq cr6,0x8316ad70
	if (cr6.eq) goto loc_8316AD70;
	// bl 0x83168778
	sub_83168778(ctx, base);
	// b 0x8316ad70
	goto loc_8316AD70;
loc_8316AD54:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r4,r10,31812
	ctx.r4.s64 = ctx.r10.s64 + 31812;
loc_8316AD68:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316AD70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AD88"))) PPC_WEAK_FUNC(sub_8316AD88);
PPC_FUNC_IMPL(__imp__sub_8316AD88) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8316adb8
	if (!cr6.eq) goto loc_8316ADB8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31304
	ctx.r4.s64 = r11.s64 + 31304;
	// b 0x8316af44
	goto loc_8316AF44;
loc_8316ADB8:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8316add0
	if (!cr6.eq) goto loc_8316ADD0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,31812
	ctx.r4.s64 = r11.s64 + 31812;
	// b 0x8316af44
	goto loc_8316AF44;
loc_8316ADD0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8316af4c
	if (!cr6.gt) goto loc_8316AF4C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8316af4c
	if (cr6.eq) goto loc_8316AF4C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8316ae8c
	if (!cr6.eq) goto loc_8316AE8C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316ae00
	if (cr6.eq) goto loc_8316AE00;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_8316AE00:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// subf r4,r6,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r6.s64;
	// divwu r3,r5,r9
	ctx.r3.u32 = ctx.r5.u32 / ctx.r9.u32;
	// divwu r11,r4,r9
	r11.u32 = ctx.r4.u32 / ctx.r9.u32;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// subf r11,r10,r5
	r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x8316ae58
	if (!cr6.eq) goto loc_8316AE58;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8316ae68
	goto loc_8316AE68;
loc_8316AE58:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31836
	ctx.r4.s64 = r11.s64 + 31836;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316AE68:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// beq cr6,0x8316af4c
	if (cr6.eq) goto loc_8316AF4C;
	// bl 0x83168778
	sub_83168778(ctx, base);
	// b 0x8316af4c
	goto loc_8316AF4C;
loc_8316AE8C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8316af30
	if (!cr6.eq) goto loc_8316AF30;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316aea4
	if (cr6.eq) goto loc_8316AEA4;
	// bl 0x83168760
	sub_83168760(ctx, base);
loc_8316AEA4:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// subf r4,r6,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r6.s64;
	// divwu r3,r5,r9
	ctx.r3.u32 = ctx.r5.u32 / ctx.r9.u32;
	// divwu r11,r4,r9
	r11.u32 = ctx.r4.u32 / ctx.r9.u32;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// subf r11,r10,r5
	r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x8316aefc
	if (!cr6.eq) goto loc_8316AEFC;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x8316af0c
	goto loc_8316AF0C;
loc_8316AEFC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31824
	ctx.r4.s64 = r11.s64 + 31824;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316AF0C:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// beq cr6,0x8316af4c
	if (cr6.eq) goto loc_8316AF4C;
	// bl 0x83168778
	sub_83168778(ctx, base);
	// b 0x8316af4c
	goto loc_8316AF4C;
loc_8316AF30:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r4,r10,31812
	ctx.r4.s64 = ctx.r10.s64 + 31812;
loc_8316AF44:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316AF4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF68"))) PPC_WEAK_FUNC(sub_8316AF68);
PPC_FUNC_IMPL(__imp__sub_8316AF68) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r9,31848
	ctx.r7.s64 = ctx.r9.s64 + 31848;
	// bl 0x8316a6b0
	sub_8316A6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AFA8"))) PPC_WEAK_FUNC(sub_8316AFA8);
PPC_FUNC_IMPL(__imp__sub_8316AFA8) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8316a828
	sub_8316A828(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AFE0"))) PPC_WEAK_FUNC(sub_8316AFE0);
PPC_FUNC_IMPL(__imp__sub_8316AFE0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x8316b020
	if (cr6.eq) goto loc_8316B020;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,32092
	ctx.r4.s64 = ctx.r10.s64 + 32092;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831683e0
	sub_831683E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b5c
	return;
loc_8316B020:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r27,r6,r8
	r27.u32 = ctx.r6.u32 / ctx.r8.u32;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x8316b040
	if (cr6.lt) goto loc_8316B040;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_8316B040:
	// addi r11,r4,31
	r11.s64 = ctx.r4.s64 + 31;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x8316b054
	if (cr6.lt) goto loc_8316B054;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_8316B054:
	// lhz r11,8(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lhz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// li r28,0
	r28.s64 = 0;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfs f0,-3768(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3768);
	f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 * f0.f64));
	// beq cr6,0x8316b524
	if (cr6.eq) goto loc_8316B524;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,32024
	ctx.r10.s64 = r11.s64 + 32024;
	// lfs f12,32088(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32088);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-31440(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -31440);
	ctx.f11.f64 = double(temp.f32);
loc_8316B0BC:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8316b514
	if (cr6.eq) goto loc_8316B514;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r6,r3,48
	ctx.r6.s64 = ctx.r3.s64 + 48;
loc_8316B0D4:
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r8,r11,r8
	ctx.r8.u64 = r11.u64 | ctx.r8.u64;
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r8,r11,0,16,16
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8316b524
	if (!cr6.eq) goto loc_8316B524;
	// lhz r30,2(r3)
	r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r8,r5,2
	ctx.r8.s64 = ctx.r5.s64 + 2;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// lhz r26,4(r3)
	r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// extsh r5,r30
	ctx.r5.s64 = r30.s16;
	// lhz r25,6(r3)
	r25.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r24,r30
	r24.s64 = r30.s16;
	// xor r11,r5,r11
	r11.u64 = ctx.r5.u64 ^ r11.u64;
	// extsh r5,r26
	ctx.r5.s64 = r26.s16;
	// clrlwi r30,r11,19
	r30.u64 = r11.u32 & 0x1FFF;
	// mullw r5,r5,r24
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r24.s32);
	// extsh r11,r25
	r11.s64 = r25.s16;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// extsh r5,r30
	ctx.r5.s64 = r30.s16;
	// clrlwi r11,r11,17
	r11.u64 = r11.u32 & 0x7FFF;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// lfs f10,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// rlwinm r30,r5,6,26,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3C;
	// rlwinm r26,r5,10,26,29
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0x3C;
	// rlwinm r25,r5,14,26,29
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x3C;
	// rlwinm r24,r5,18,26,29
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0x3C;
	// rlwinm r23,r5,26,26,29
	r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3C;
	// lfsx f5,r30,r10
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r30,r5,22,26,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3C;
	// fmuls f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// rlwinm r22,r5,30,26,29
	r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// fmadds f2,f5,f3,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fmadds f1,f10,f0,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f2.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfsx f8,r26,r10
	temp.u32 = PPC_LOAD_U32(r26.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmr f9,f1
	ctx.f9.f64 = ctx.f1.f64;
	// fmadds f6,f8,f3,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fmuls f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f4,f10,f13,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfsx f2,r25,r10
	temp.u32 = PPC_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f10,f2,f3,f5
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f9,f4,f0,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * f0.f64 + ctx.f10.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfsx f8,r24,r10
	temp.u32 = PPC_LOAD_U32(r24.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmadds f5,f8,f3,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmadds f4,f1,f13,f5
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f5.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfsx f2,r30,r10
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * f0.f64));
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmadds f9,f2,f3,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fmadds f8,f13,f7,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f9.f64));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfsx f7,r23,r10
	temp.u32 = PPC_LOAD_U32(r23.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmadds f4,f7,f3,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f2,f1,f13,f4
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f4.f64));
	// stfs f2,20(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfsx f1,r22,r10
	temp.u32 = PPC_LOAD_U32(r22.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fmr f10,f2
	ctx.f10.f64 = ctx.f2.f64;
	// fmadds f8,f1,f3,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f7,f13,f6,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f8.f64));
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfsx f4,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// fmadds f2,f4,f3,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f1,f10,f13,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmr f10,f1
	ctx.f10.f64 = ctx.f1.f64;
	// stfs f1,28(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r30,r5,6,26,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3C;
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfsx f8,r30,r10
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r30,r5,10,26,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0x3C;
	// fmadds f7,f8,f3,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f9.f64));
	// rlwinm r26,r5,14,26,29
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x3C;
	// rlwinm r25,r5,18,26,29
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0x3C;
	// rlwinm r24,r5,22,26,29
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3C;
	// rlwinm r23,r5,26,26,29
	r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3C;
	// rlwinm r22,r5,30,26,29
	r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// fmadds f6,f13,f6,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f7.f64));
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfsx f5,r30,r10
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * f0.f64));
	// fmadds f1,f5,f3,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f10,f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f1.f64));
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// lfsx f9,r26,r10
	temp.u32 = PPC_LOAD_U32(r26.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f9,f3,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f4,f13,f7
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f5,40(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfsx f4,r25,r10
	temp.u32 = PPC_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// fmadds f10,f4,f3,f1
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f9,f6,f13,f10
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,44(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lfsx f8,r24,r10
	temp.u32 = PPC_LOAD_U32(r24.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmadds f5,f8,f3,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmadds f4,f2,f13,f5
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f5.f64));
	// stfs f4,48(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lfsx f1,r23,r10
	temp.u32 = PPC_LOAD_U32(r23.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * f0.f64));
	// fmr f8,f4
	ctx.f8.f64 = ctx.f4.f64;
	// fmadds f10,f1,f3,f2
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f9,f13,f7,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stfs f9,52(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// lfsx f5,r22,r10
	temp.u32 = PPC_LOAD_U32(r22.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f5,f3,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fmadds f2,f9,f0,f4
	ctx.f2.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f4.f64));
	// stfs f2,56(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfsx f10,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f10,f3,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f7,f6,f13,f8
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f7,60(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// fmuls f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r30,r5,6,26,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3C;
	// lfsx f4,r30,r10
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f4,f3,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// rlwinm r30,r5,10,26,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0x3C;
	// rlwinm r26,r5,14,26,29
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x3C;
	// rlwinm r25,r5,18,26,29
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0x3C;
	// rlwinm r24,r5,22,26,29
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3C;
	// rlwinm r23,r5,26,26,29
	r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3C;
	// fmadds f1,f6,f0,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * f0.f64 + ctx.f2.f64));
	// stfs f1,64(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
	// lfsx f8,r30,r10
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r30,r5,30,26,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// fmr f10,f1
	ctx.f10.f64 = ctx.f1.f64;
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmadds f7,f8,f3,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f6,f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f6,68(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 68, temp.u32);
	// lfsx f4,r26,r10
	temp.u32 = PPC_LOAD_U32(r26.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmadds f1,f4,f3,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f5.f64));
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmadds f10,f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f1.f64));
	// stfs f10,72(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
	// lfsx f9,r25,r10
	temp.u32 = PPC_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmadds f6,f9,f3,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fmadds f5,f2,f13,f6
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f5,76(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 76, temp.u32);
	// lfsx f10,r24,r10
	temp.u32 = PPC_LOAD_U32(r24.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// fmadds f9,f10,f3,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmadds f8,f13,f8,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f8,80(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 80, temp.u32);
	// lfsx f7,r23,r10
	temp.u32 = PPC_LOAD_U32(r23.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f3,f2
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f4,f8,f0,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * f0.f64 + ctx.f6.f64));
	// stfs f4,84(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
	// lfsx f2,r30,r10
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * f0.f64));
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmadds f9,f2,f3,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fmadds f8,f5,f13,f9
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,88(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 88, temp.u32);
	// lfsx f7,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmadds f4,f7,f3,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f2,f1,f13,f4
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f4.f64));
	// stfs f2,92(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 92, temp.u32);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r30,r5,6,26,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3C;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfsx f9,r30,r10
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r30,r5,10,26,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0x3C;
	// rlwinm r26,r5,14,26,29
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x3C;
	// rlwinm r25,r5,18,26,29
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0x3C;
	// rlwinm r24,r5,22,26,29
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3C;
	// rlwinm r23,r5,26,26,29
	r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3C;
	// rlwinm r22,r5,30,26,29
	r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// rlwinm r21,r5,2,26,29
	r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmadds f8,f9,f3,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fmadds f7,f13,f6,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f8.f64));
	// stfs f7,96(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// lfsx f4,r30,r10
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmadds f2,f4,f3,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f1,f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f1,100(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 100, temp.u32);
	// lfsx f8,r26,r10
	temp.u32 = PPC_LOAD_U32(r26.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmr f10,f1
	ctx.f10.f64 = ctx.f1.f64;
	// fmadds f7,f8,f3,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f6,f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f6,104(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 104, temp.u32);
	// lfsx f4,r25,r10
	temp.u32 = PPC_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// fmadds f2,f4,f3,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmuls f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmadds f10,f13,f10,f2
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f2.f64));
	// stfs f10,108(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 108, temp.u32);
	// lfsx f8,r24,r10
	temp.u32 = PPC_LOAD_U32(r24.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f8,f3,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f5,f10,f0,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f6.f64));
	// stfs f5,112(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 112, temp.u32);
	// lfsx f2,r23,r10
	temp.u32 = PPC_LOAD_U32(r23.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// fmadds f10,f2,f3,f1
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f9,f7,f13,f10
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,116(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 116, temp.u32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// lfsx f7,r22,r10
	temp.u32 = PPC_LOAD_U32(r22.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f3,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f4,f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f4,120(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 120, temp.u32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * f0.f64));
	// lfsx f2,r21,r10
	temp.u32 = PPC_LOAD_U32(r21.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f10,f2,f3,f1
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f9,f13,f5,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f10.f64));
	// stfs f9,124(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,-4(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// lfs f7,120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8316b0d4
	if (cr6.lt) goto loc_8316B0D4;
loc_8316B514:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,128
	r29.s64 = r29.s64 + 128;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// blt cr6,0x8316b0bc
	if (cr6.lt) goto loc_8316B0BC;
loc_8316B524:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r11,r11,r28
	r11.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_8316B548"))) PPC_WEAK_FUNC(sub_8316B548);
PPC_FUNC_IMPL(__imp__sub_8316B548) {
	PPC_FUNC_PROLOGUE();
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831b0ba0
	sub_831B0BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316B558"))) PPC_WEAK_FUNC(sub_8316B558);
PPC_FUNC_IMPL(__imp__sub_8316B558) {
	PPC_FUNC_PROLOGUE();
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B560"))) PPC_WEAK_FUNC(sub_8316B560);
PPC_FUNC_IMPL(__imp__sub_8316B560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// addi r7,r4,3
	ctx.r7.s64 = ctx.r4.s64 + 3;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// add r7,r11,r3
	ctx.r7.u64 = r11.u64 + ctx.r3.u64;
	// add r11,r10,r3
	r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// sthx r5,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r5.u16);
	// lfs f0,24296(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24296);
	f0.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// sth r6,14(r7)
	PPC_STORE_U16(ctx.r7.u32 + 14, ctx.r6.u16);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfsx f7,r10,r3
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f8,44(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B5D0"))) PPC_WEAK_FUNC(sub_8316B5D0);
PPC_FUNC_IMPL(__imp__sub_8316B5D0) {
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
	// clrldi r11,r4,32
	r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,12224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12224);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,-18480(r8)
	f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18480);
	// fsqrts f31,f0
	f31.f64 = double(float(sqrt(f0.f64)));
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fdivs f1,f6,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 / ctx.f7.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// lfs f0,2244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fsubs f4,f31,f0
	ctx.f4.f64 = double(float(f31.f64 - f0.f64));
	// lfs f0,-25728(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25728);
	f0.f64 = double(temp.f32);
	// lfs f13,12656(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12656);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f3,f31,f5
	ctx.f3.f64 = double(float(f31.f64 - ctx.f5.f64));
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fadds f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fmuls f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsubs f10,f3,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fdivs f9,f10,f4
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f4.f64));
	// fmuls f8,f9,f9
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r4,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r4.u16);
	// fctiwz f4,f6
	ctx.f4.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r3,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r3.u16);
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

__attribute__((alias("__imp__sub_8316B6B0"))) PPC_WEAK_FUNC(sub_8316B6B0);
PPC_FUNC_IMPL(__imp__sub_8316B6B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,20
	cr6.compare<uint32_t>(ctx.r4.u32, 20, xer);
	// bge cr6,0x8316b6c4
	if (!cr6.lt) goto loc_8316B6C4;
loc_8316B6BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8316B6C4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// beq cr6,0x8316b6d8
	if (cr6.eq) goto loc_8316B6D8;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_8316B6D8:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// blt cr6,0x8316b6bc
	if (cr6.lt) goto loc_8316B6BC;
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lbz r9,19(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 19);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B700"))) PPC_WEAK_FUNC(sub_8316B700);
PPC_FUNC_IMPL(__imp__sub_8316B700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x8316b714
	if (!cr6.lt) goto loc_8316B714;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8316B714:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r4,1(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r4,r11,r4
	ctx.r4.u64 = r11.u64 | ctx.r4.u64;
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// beq cr6,0x8316b73c
	if (cr6.eq) goto loc_8316B73C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8316B73C:
	// lbz r11,2(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r4,3(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// sth r4,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
	// lbz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r5,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r5.u8);
	// lbz r4,5(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r11.u8);
	// lbz r6,7(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// lbz r5,9(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lbz r4,10(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r11,11(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 | r11.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r9,15(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// lbz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 | r11.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r10
	r11.u64 = ctx.r3.u64 | ctx.r10.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lbz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r11,r7
	r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316b7f8
	if (!cr6.eq) goto loc_8316B7F8;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8316B7F8:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// divw r6,r7,r11
	ctx.r6.s32 = ctx.r7.s32 / r11.s32;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B820"))) PPC_WEAK_FUNC(sub_8316B820);
PPC_FUNC_IMPL(__imp__sub_8316B820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B830"))) PPC_WEAK_FUNC(sub_8316B830);
PPC_FUNC_IMPL(__imp__sub_8316B830) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8316b6b0
	sub_8316B6B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8316b918
	if (cr6.lt) goto loc_8316B918;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x8316b900
	if (cr6.lt) goto loc_8316B900;
	// lhz r11,2(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// cmpwi cr6,r10,28
	cr6.compare<int32_t>(ctx.r10.s32, 28, xer);
	// bge cr6,0x8316b894
	if (!cr6.lt) goto loc_8316B894;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8316B894:
	// lhz r11,24(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 24);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lhz r10,26(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 26);
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// lhz r9,28(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 28);
	// sth r9,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// lhz r6,30(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 30);
	// sth r6,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r6.u16);
	// bl 0x8316b820
	sub_8316B820(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x8316b914
	if (cr6.lt) goto loc_8316B914;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// ble cr6,0x8316b914
	if (!cr6.gt) goto loc_8316B914;
	// addi r11,r8,32
	r11.s64 = ctx.r8.s64 + 32;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// subf r8,r7,r31
	ctx.r8.s64 = r31.s64 - ctx.r7.s64;
	// addi r9,r3,-2
	ctx.r9.s64 = ctx.r3.s64 + -2;
loc_8316B8DC:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sthx r7,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u16);
	// lhz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8316b8dc
	if (!cr0.eq) goto loc_8316B8DC;
	// b 0x8316b914
	goto loc_8316B914;
loc_8316B900:
	// li r11,0
	r11.s64 = 0;
	// sth r11,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, r11.u16);
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, r11.u16);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
loc_8316B914:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316B918:
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

__attribute__((alias("__imp__sub_8316B930"))) PPC_WEAK_FUNC(sub_8316B930);
PPC_FUNC_IMPL(__imp__sub_8316B930) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x8316b6b0
	sub_8316B6B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8316ba48
	if (cr6.lt) goto loc_8316BA48;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,48
	ctx.r10.s64 = 48;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x8316b9a0
	if (!cr6.eq) goto loc_8316B9A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r10,60
	ctx.r10.s64 = 60;
	// bl 0x8316b820
	sub_8316B820(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x8316b9a0
	if (cr6.lt) goto loc_8316B9A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316b820
	sub_8316B820(ctx, base);
	// addi r11,r3,13
	r11.s64 = ctx.r3.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8316B9A0:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8316b9b4
	if (!cr6.lt) goto loc_8316B9B4;
loc_8316B9A8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8316B9B4:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// extsh r6,r11
	ctx.r6.s64 = r11.s16;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// blt cr6,0x8316b9a8
	if (cr6.lt) goto loc_8316B9A8;
	// li r11,20
	r11.s64 = 20;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x8316b9d8
	if (!cr6.eq) goto loc_8316B9D8;
	// li r11,32
	r11.s64 = 32;
loc_8316B9D8:
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// lhzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// sth r6,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r6.u16);
	// beq cr6,0x8316ba04
	if (cr6.eq) goto loc_8316BA04;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8316BA04:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// sth r6,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r6.u16);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r4,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r4.u32);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8316BA48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316BA50"))) PPC_WEAK_FUNC(sub_8316BA50);
PPC_FUNC_IMPL(__imp__sub_8316BA50) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// bl 0x8316b6b0
	sub_8316B6B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8316bbc0
	if (cr6.lt) goto loc_8316BBC0;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,60
	ctx.r10.s64 = 60;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x8316bac0
	if (!cr6.eq) goto loc_8316BAC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r10,72
	ctx.r10.s64 = 72;
	// bl 0x8316b820
	sub_8316B820(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x8316bac0
	if (cr6.lt) goto loc_8316BAC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316b820
	sub_8316B820(ctx, base);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8316BAC0:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8316bad4
	if (!cr6.lt) goto loc_8316BAD4;
loc_8316BAC8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_8316BAD4:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// extsh r8,r11
	ctx.r8.s64 = r11.s16;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x8316bac8
	if (cr6.lt) goto loc_8316BAC8;
	// li r10,20
	ctx.r10.s64 = 20;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x8316bb18
	if (!cr6.eq) goto loc_8316BB18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// bl 0x8316b820
	sub_8316B820(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x8316bb18
	if (cr6.lt) goto loc_8316BB18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316b820
	sub_8316B820(ctx, base);
	// addi r11,r3,6
	r11.s64 = ctx.r3.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8316BB18:
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8316bb30
	if (cr6.eq) goto loc_8316BB30;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
loc_8316BB30:
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// lis r9,16713
	ctx.r9.s64 = 1095303168;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// ori r8,r9,20038
	ctx.r8.u64 = ctx.r9.u64 | 20038;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r3,3(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// beq cr6,0x8316bb7c
	if (cr6.eq) goto loc_8316BB7C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_8316BB7C:
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r4,r30,r31
	ctx.r4.u64 = r30.u64 + r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// sth r9,0(r26)
	PPC_STORE_U16(r26.u32 + 0, ctx.r9.u16);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r8,0(r29)
	PPC_STORE_U16(r29.u32 + 0, ctx.r8.u16);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r7,2(r29)
	PPC_STORE_U16(r29.u32 + 2, ctx.r7.u16);
loc_8316BBC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8316BBC8"))) PPC_WEAK_FUNC(sub_8316BBC8);
PPC_FUNC_IMPL(__imp__sub_8316BBC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// bge cr6,0x8316bbd8
	if (!cr6.lt) goto loc_8316BBD8;
loc_8316BBD0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8316BBD8:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// beq cr6,0x8316bbec
	if (cr6.eq) goto loc_8316BBEC;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_8316BBEC:
	// lhz r11,2(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// blt cr6,0x8316bbd0
	if (cr6.lt) goto loc_8316BBD0;
	// lhz r11,16(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BC10"))) PPC_WEAK_FUNC(sub_8316BC10);
PPC_FUNC_IMPL(__imp__sub_8316BC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// bge cr6,0x8316bc2c
	if (!cr6.lt) goto loc_8316BC2C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8316BC2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r6,32769
	cr6.compare<uint32_t>(ctx.r6.u32, 32769, xer);
	// beq cr6,0x8316bc50
	if (cr6.eq) goto loc_8316BC50;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_8316BC50:
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BC78"))) PPC_WEAK_FUNC(sub_8316BC78);
PPC_FUNC_IMPL(__imp__sub_8316BC78) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r9,r11,31864
	ctx.r9.s64 = r11.s64 + 31864;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// sth r8,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r8.u16);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r9,-29644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29644, ctx.r9.u32);
	// bl 0x8316b6b0
	sub_8316B6B0(ctx, base);
	// addi r7,r31,16
	ctx.r7.s64 = r31.s64 + 16;
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// addi r9,r31,5
	ctx.r9.s64 = r31.s64 + 5;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
	// addi r7,r31,3
	ctx.r7.s64 = r31.s64 + 3;
	// addi r6,r31,2
	ctx.r6.s64 = r31.s64 + 2;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8316b700
	sub_8316B700(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r31,38
	ctx.r6.s64 = r31.s64 + 38;
	// addi r5,r31,22
	ctx.r5.s64 = r31.s64 + 22;
	// bl 0x8316b830
	sub_8316B830(ctx, base);
	// addi r5,r31,76
	ctx.r5.s64 = r31.s64 + 76;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r31,72
	ctx.r10.s64 = r31.s64 + 72;
	// addi r9,r31,68
	ctx.r9.s64 = r31.s64 + 68;
	// addi r8,r31,64
	ctx.r8.s64 = r31.s64 + 64;
	// addi r7,r31,62
	ctx.r7.s64 = r31.s64 + 62;
	// addi r6,r31,60
	ctx.r6.s64 = r31.s64 + 60;
	// addi r5,r31,56
	ctx.r5.s64 = r31.s64 + 56;
	// bl 0x8316b930
	sub_8316B930(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r31,98
	ctx.r8.s64 = r31.s64 + 98;
	// addi r7,r31,96
	ctx.r7.s64 = r31.s64 + 96;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// bl 0x8316ba50
	sub_8316BA50(ctx, base);
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8316bbc8
	sub_8316BBC8(ctx, base);
	// lhz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316BD58"))) PPC_WEAK_FUNC(sub_8316BD58);
PPC_FUNC_IMPL(__imp__sub_8316BD58) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316bd8c
	if (!cr6.eq) goto loc_8316BD8C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,32164
	ctx.r4.s64 = r11.s64 + 32164;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8316BD8C:
	// cmplwi cr6,r4,20
	cr6.compare<uint32_t>(ctx.r4.u32, 20, xer);
	// bge cr6,0x8316bdb8
	if (!cr6.lt) goto loc_8316BDB8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32128
	ctx.r4.s64 = r11.s64 + 32128;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8316BDB8:
	// addi r10,r3,7
	ctx.r10.s64 = ctx.r3.s64 + 7;
	// li r11,0
	r11.s64 = 0;
	// rlwinm r3,r10,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// addi r7,r9,-15092
	ctx.r7.s64 = ctx.r9.s64 + -15092;
	// addi r6,r8,32104
	ctx.r6.s64 = ctx.r8.s64 + 32104;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BDF8"))) PPC_WEAK_FUNC(sub_8316BDF8);
PPC_FUNC_IMPL(__imp__sub_8316BDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316be0c
	if (!cr6.eq) goto loc_8316BE0C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,32200
	ctx.r4.s64 = r11.s64 + 32200;
	// b 0x831684b0
	sub_831684B0(ctx, base);
	return;
loc_8316BE0C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BE20"))) PPC_WEAK_FUNC(sub_8316BE20);
PPC_FUNC_IMPL(__imp__sub_8316BE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316be34
	if (!cr6.eq) goto loc_8316BE34;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,32236
	ctx.r4.s64 = r11.s64 + 32236;
	// b 0x831684b0
	sub_831684B0(ctx, base);
	return;
loc_8316BE34:
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BE40"))) PPC_WEAK_FUNC(sub_8316BE40);
PPC_FUNC_IMPL(__imp__sub_8316BE40) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316be74
	if (!cr6.eq) goto loc_8316BE74;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,32272
	ctx.r4.s64 = r11.s64 + 32272;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8316BE74:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BE88"))) PPC_WEAK_FUNC(sub_8316BE88);
PPC_FUNC_IMPL(__imp__sub_8316BE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316be9c
	if (!cr6.eq) goto loc_8316BE9C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,32308
	ctx.r4.s64 = r11.s64 + 32308;
	// b 0x831684b0
	sub_831684B0(ctx, base);
	return;
loc_8316BE9C:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8316a508
	sub_8316A508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316BEAC"))) PPC_WEAK_FUNC(sub_8316BEAC);
PPC_FUNC_IMPL(__imp__sub_8316BEAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BEB0"))) PPC_WEAK_FUNC(sub_8316BEB0);
PPC_FUNC_IMPL(__imp__sub_8316BEB0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316bee4
	if (!cr6.eq) goto loc_8316BEE4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,32344
	ctx.r4.s64 = r11.s64 + 32344;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8316BEE4:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316bf00
	if (!cr6.eq) goto loc_8316BF00;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8316BF00:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32120
	ctx.r9.s64 = r11.s64 + 32120;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8315def8
	sub_8315DEF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BF28"))) PPC_WEAK_FUNC(sub_8316BF28);
PPC_FUNC_IMPL(__imp__sub_8316BF28) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316bfb4
	if (cr6.eq) goto loc_8316BFB4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8316bfb4
	if (cr6.eq) goto loc_8316BFB4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316bf78
	if (!cr6.eq) goto loc_8316BF78;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8316BF78:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32120
	ctx.r9.s64 = r11.s64 + 32120;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8316a518
	sub_8316A518(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8316BFB4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32380
	ctx.r4.s64 = r11.s64 + 32380;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
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

__attribute__((alias("__imp__sub_8316BFD8"))) PPC_WEAK_FUNC(sub_8316BFD8);
PPC_FUNC_IMPL(__imp__sub_8316BFD8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316c038
	if (cr6.eq) goto loc_8316C038;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8316c038
	if (cr6.eq) goto loc_8316C038;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316c048
	if (cr6.eq) goto loc_8316C048;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,32120
	ctx.r7.s64 = ctx.r10.s64 + 32120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x8315dee8
	sub_8315DEE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8316C038:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32416
	ctx.r4.s64 = r11.s64 + 32416;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316C048:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C058"))) PPC_WEAK_FUNC(sub_8316C058);
PPC_FUNC_IMPL(__imp__sub_8316C058) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316c0b8
	if (cr6.eq) goto loc_8316C0B8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8316c0b8
	if (cr6.eq) goto loc_8316C0B8;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316c0c8
	if (cr6.eq) goto loc_8316C0C8;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,32120
	ctx.r7.s64 = ctx.r10.s64 + 32120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x8316a528
	sub_8316A528(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8316C0B8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32452
	ctx.r4.s64 = r11.s64 + 32452;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316C0C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C0D8"))) PPC_WEAK_FUNC(sub_8316C0D8);
PPC_FUNC_IMPL(__imp__sub_8316C0D8) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8316c110
	if (!cr6.eq) goto loc_8316C110;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,32488
	ctx.r4.s64 = r11.s64 + 32488;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8316C110:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316c138
	if (!cr6.eq) goto loc_8316C138;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8316c12c
	if (cr6.eq) goto loc_8316C12C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8316C12C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8316C138:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,32120
	r31.s64 = r11.s64 + 32120;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x8316a518
	sub_8316A518(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8316c164
	if (cr6.eq) goto loc_8316C164;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8316C164:
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r31,r10,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8316a528
	sub_8316A528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316C190"))) PPC_WEAK_FUNC(sub_8316C190);
PPC_FUNC_IMPL(__imp__sub_8316C190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,32524
	ctx.r4.s64 = r11.s64 + 32524;
	// b 0x831684b0
	sub_831684B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316C1A0"))) PPC_WEAK_FUNC(sub_8316C1A0);
PPC_FUNC_IMPL(__imp__sub_8316C1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,32568
	r11.s64 = r11.s64 + 32568;
	// stw r11,-29636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29636, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C1B8"))) PPC_WEAK_FUNC(sub_8316C1B8);
PPC_FUNC_IMPL(__imp__sub_8316C1B8) {
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
	// bl 0x831686a8
	sub_831686A8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,32652
	ctx.r10.s64 = r11.s64 + 32652;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8316C1EC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8316c1ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8316C1EC;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8316C218"))) PPC_WEAK_FUNC(sub_8316C218);
PPC_FUNC_IMPL(__imp__sub_8316C218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r10,r11,32652
	ctx.r10.s64 = r11.s64 + 32652;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x831686c0
	sub_831686C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316C230"))) PPC_WEAK_FUNC(sub_8316C230);
PPC_FUNC_IMPL(__imp__sub_8316C230) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316c27c
	if (cr6.eq) goto loc_8316C27C;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8316c278
	goto loc_8316C278;
	// li r30,0
	r30.s64 = 0;
loc_8316C278:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8316C27C:
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

__attribute__((alias("__imp__sub_8316C294"))) PPC_WEAK_FUNC(sub_8316C294);
PPC_FUNC_IMPL(__imp__sub_8316C294) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C2A8"))) PPC_WEAK_FUNC(sub_8316C2A8);
PPC_FUNC_IMPL(__imp__sub_8316C2A8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316c2f4
	if (cr6.eq) goto loc_8316C2F4;
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
	// b 0x8316c2f0
	goto loc_8316C2F0;
	// li r30,0
	r30.s64 = 0;
loc_8316C2F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8316C2F4:
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

__attribute__((alias("__imp__sub_8316C30C"))) PPC_WEAK_FUNC(sub_8316C30C);
PPC_FUNC_IMPL(__imp__sub_8316C30C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C320"))) PPC_WEAK_FUNC(sub_8316C320);
PPC_FUNC_IMPL(__imp__sub_8316C320) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316c36c
	if (cr6.eq) goto loc_8316C36C;
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
	// b 0x8316c368
	goto loc_8316C368;
	// li r30,0
	r30.s64 = 0;
loc_8316C368:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8316C36C:
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

__attribute__((alias("__imp__sub_8316C384"))) PPC_WEAK_FUNC(sub_8316C384);
PPC_FUNC_IMPL(__imp__sub_8316C384) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C398"))) PPC_WEAK_FUNC(sub_8316C398);
PPC_FUNC_IMPL(__imp__sub_8316C398) {
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
	// addi r31,r1,-32
	r31.s64 = ctx.r1.s64 + -32;
	// stwu r1,-32(r1)
	ea = -32 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316c3cc
	if (!cr6.eq) goto loc_8316C3CC;
	// addi r1,r31,32
	ctx.r1.s64 = r31.s64 + 32;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8316C3CC:
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
	// b 0x8316c3ec
	goto loc_8316C3EC;
	// li r11,0
	r11.s64 = 0;
loc_8316C3EC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r31,32
	ctx.r1.s64 = r31.s64 + 32;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C404"))) PPC_WEAK_FUNC(sub_8316C404);
PPC_FUNC_IMPL(__imp__sub_8316C404) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C410"))) PPC_WEAK_FUNC(sub_8316C410);
PPC_FUNC_IMPL(__imp__sub_8316C410) {
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
	// bl 0x8316c218
	sub_8316C218(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8316c44c
	if (cr6.eq) goto loc_8316C44C;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8316C44C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C468"))) PPC_WEAK_FUNC(sub_8316C468);
PPC_FUNC_IMPL(__imp__sub_8316C468) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x831686a0
	sub_831686A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316c4b0
	if (cr6.eq) goto loc_8316C4B0;
	// bl 0x8316c1b8
	sub_8316C1B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8316c4d4
	if (!cr6.eq) goto loc_8316C4D4;
loc_8316C4B0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32728
	ctx.r4.s64 = r11.s64 + 32728;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-3
	ctx.r10.s64 = -3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8316C4D4:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8316c230
	sub_8316C230(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8316c520
	if (!cr6.eq) goto loc_8316C520;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,32668
	ctx.r4.s64 = r11.s64 + 32668;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r9,-29936
	ctx.r4.s64 = ctx.r9.s64 + -29936;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8316C520:
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316C538"))) PPC_WEAK_FUNC(sub_8316C538);
PPC_FUNC_IMPL(__imp__sub_8316C538) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r28,36(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x8316c398
	sub_8316C398(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8316c580
	if (!cr6.eq) goto loc_8316C580;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-32768
	ctx.r4.s64 = r11.s64 + -32768;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_8316C580:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8316c5bc
	if (cr6.eq) goto loc_8316C5BC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
loc_8316C5BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316C5C8"))) PPC_WEAK_FUNC(sub_8316C5C8);
PPC_FUNC_IMPL(__imp__sub_8316C5C8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8316c2a8
	sub_8316C2A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8316c608
	if (!cr6.eq) goto loc_8316C608;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-32712
	ctx.r4.s64 = r11.s64 + -32712;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8316C608:
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

__attribute__((alias("__imp__sub_8316C620"))) PPC_WEAK_FUNC(sub_8316C620);
PPC_FUNC_IMPL(__imp__sub_8316C620) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8316c320
	sub_8316C320(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8316c660
	if (!cr6.eq) goto loc_8316C660;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-32656
	ctx.r4.s64 = r11.s64 + -32656;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8316C660:
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

__attribute__((alias("__imp__sub_8316C678"))) PPC_WEAK_FUNC(sub_8316C678);
PPC_FUNC_IMPL(__imp__sub_8316C678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r24{};
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bgt cr6,0x8316c6e8
	if (cr6.gt) goto loc_8316C6E8;
	// lis r12,-31977
	r12.s64 = -2095644672;
	// addi r12,r12,-14696
	r12.s64 = r12.s64 + -14696;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8316C6C8;
	case 1:
		goto loc_8316C6C8;
	case 2:
		goto loc_8316C6D0;
	case 3:
		goto loc_8316C6D0;
	case 4:
		goto loc_8316C6D8;
	case 5:
		goto loc_8316C6D8;
	case 6:
		goto loc_8316C6E0;
	case 7:
		goto loc_8316C6E0;
	case 8:
		goto loc_8316C6D8;
	case 9:
		goto loc_8316C6E0;
	case 10:
		goto loc_8316C6D8;
	case 11:
		goto loc_8316C6E0;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-14648(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14648);
	// lwz r24,-14648(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14648);
	// lwz r24,-14640(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14640);
	// lwz r24,-14640(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14640);
	// lwz r24,-14632(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14632);
	// lwz r24,-14632(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14632);
	// lwz r24,-14624(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14624);
	// lwz r24,-14624(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14624);
	// lwz r24,-14632(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14632);
	// lwz r24,-14624(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14624);
	// lwz r24,-14632(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14632);
	// lwz r24,-14624(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + -14624);
loc_8316C6C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8316C6D0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8316C6D8:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8316C6E0:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8316C6E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C6F0"))) PPC_WEAK_FUNC(sub_8316C6F0);
PPC_FUNC_IMPL(__imp__sub_8316C6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r11,r5,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C758"))) PPC_WEAK_FUNC(sub_8316C758);
PPC_FUNC_IMPL(__imp__sub_8316C758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// sth r5,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r5.u16);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 11);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// lbz r5,13(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 14);
	// lbz r9,15(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 15);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// lbz r6,17(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// lbz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 | ctx.r6.u64;
	// sth r9,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r9.u16);
	// lbz r7,19(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 19);
	// lbz r6,18(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 | ctx.r7.u64;
	// sth r10,18(r4)
	PPC_STORE_U16(ctx.r4.u32 + 18, ctx.r10.u16);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// lbz r7,22(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 22);
	// lbz r6,23(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 23);
	// lbz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// rotlwi r11,r5,8
	r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r10,r11,r8
	ctx.r10.u64 = r11.u64 | ctx.r8.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C860"))) PPC_WEAK_FUNC(sub_8316C860);
PPC_FUNC_IMPL(__imp__sub_8316C860) {
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r9,r9,-32600
	ctx.r9.s64 = ctx.r9.s64 + -32600;
	// lwz r11,-29628(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29628);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r9,-29632(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29632, ctx.r9.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r11,-29628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29628, r11.u32);
	// bne cr6,0x8316c8e8
	if (!cr6.eq) goto loc_8316C8E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316d298
	sub_8316D298(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316c8e0
	if (!cr6.eq) goto loc_8316C8E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316e058
	sub_8316E058(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316c8e0
	if (!cr6.eq) goto loc_8316C8E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316f910
	sub_8316F910(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316c8e8
	if (cr6.eq) goto loc_8316C8E8;
loc_8316C8E0:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8316C8E8:
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

__attribute__((alias("__imp__sub_8316C900"))) PPC_WEAK_FUNC(sub_8316C900);
PPC_FUNC_IMPL(__imp__sub_8316C900) {
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,-29628(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29628);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-29628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29628, r11.u32);
	// bne 0x8316c958
	if (!cr0.eq) goto loc_8316C958;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r11,-29624
	r31.s64 = r11.s64 + -29624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316f970
	sub_8316F970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316e0b8
	sub_8316E0B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316d2f8
	sub_8316D2F8(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-29620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29620, r11.u32);
loc_8316C958:
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

__attribute__((alias("__imp__sub_8316C970"))) PPC_WEAK_FUNC(sub_8316C970);
PPC_FUNC_IMPL(__imp__sub_8316C970) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8316C994:
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x8316c9b0
	if (cr6.lt) goto loc_8316C9B0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// blt cr6,0x8316c994
	if (cr6.lt) goto loc_8316C994;
loc_8316C9B0:
	// addi r4,r4,1024
	ctx.r4.s64 = ctx.r4.s64 + 1024;
	// bl 0x83172170
	sub_83172170(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8316c9c8
	if (!cr0.eq) goto loc_8316C9C8;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8316C9C8:
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

__attribute__((alias("__imp__sub_8316C9E0"))) PPC_WEAK_FUNC(sub_8316C9E0);
PPC_FUNC_IMPL(__imp__sub_8316C9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x831715b0
	sub_831715B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316C9F0"))) PPC_WEAK_FUNC(sub_8316C9F0);
PPC_FUNC_IMPL(__imp__sub_8316C9F0) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8316ca2c
	if (cr6.eq) goto loc_8316CA2C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-32432
	r11.s64 = r11.s64 + -32432;
	// addi r10,r10,-32492
	ctx.r10.s64 = ctx.r10.s64 + -32492;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,472(r31)
	PPC_STORE_U32(r31.u32 + 472, ctx.r10.u32);
loc_8316CA2C:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r11,r11,-32444
	r11.s64 = r11.s64 + -32444;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,-32468
	ctx.r10.s64 = ctx.r10.s64 + -32468;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r11,r11,-456
	r11.s64 = r11.s64 + -456;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bl 0x83172468
	sub_83172468(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,464(r31)
	PPC_STORE_U32(r31.u32 + 464, r30.u32);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
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

__attribute__((alias("__imp__sub_8316CAC8"))) PPC_WEAK_FUNC(sub_8316CAC8);
PPC_FUNC_IMPL(__imp__sub_8316CAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r10,r10,-32444
	ctx.r10.s64 = ctx.r10.s64 + -32444;
	// addi r8,r8,-32468
	ctx.r8.s64 = ctx.r8.s64 + -32468;
	// lwz r9,-456(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -456);
	// addi r3,r11,-280
	ctx.r3.s64 = r11.s64 + -280;
	// stw r10,-472(r11)
	PPC_STORE_U32(r11.u32 + -472, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r8,-456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -456, ctx.r8.u32);
	// lwz r10,-456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -456);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,-456
	ctx.r10.s64 = ctx.r10.s64 + -456;
	// stw r10,-460(r11)
	PPC_STORE_U32(r11.u32 + -460, ctx.r10.u32);
	// b 0x82ea81c0
	sub_82EA81C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316CB10"))) PPC_WEAK_FUNC(sub_8316CB10);
PPC_FUNC_IMPL(__imp__sub_8316CB10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x831683b8
	sub_831683B8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-29624
	ctx.r3.s64 = r11.s64 + -29624;
	// bl 0x83175200
	sub_83175200(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-29608
	ctx.r3.s64 = r11.s64 + -29608;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x83172ac8
	sub_83172AC8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,-29612(r11)
	PPC_STORE_U32(r11.u32 + -29612, ctx.r3.u32);
	// beq 0x8316cb6c
	if (cr0.eq) goto loc_8316CB6C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316cb84
	if (cr6.eq) goto loc_8316CB84;
loc_8316CB6C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32424
	ctx.r4.s64 = r11.s64 + -32424;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8316CB84:
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

__attribute__((alias("__imp__sub_8316CB98"))) PPC_WEAK_FUNC(sub_8316CB98);
PPC_FUNC_IMPL(__imp__sub_8316CB98) {
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
	// li r11,0
	r11.s64 = 0;
	// lis r30,-31941
	r30.s64 = -2093285376;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r28,r11,-29936
	r28.s64 = r11.s64 + -29936;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-29612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -29612);
	// bl 0x83172a88
	sub_83172A88(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r27,r11,-29624
	r27.s64 = r11.s64 + -29624;
	// beq 0x8316cc2c
	if (cr0.eq) goto loc_8316CC2C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-32384
	ctx.r4.s64 = r11.s64 + -32384;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316CBE4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,-29612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -29612);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8316cbe4
	if (!cr6.eq) goto loc_8316CBE4;
loc_8316CC2C:
	// lwz r3,-29612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -29612);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316cc48
	if (cr6.eq) goto loc_8316CC48;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83172a18
	sub_83172A18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-29612(r30)
	PPC_STORE_U32(r30.u32 + -29612, r11.u32);
loc_8316CC48:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83173488
	sub_83173488(ctx, base);
	// bl 0x83167fb0
	sub_83167FB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316CC60"))) PPC_WEAK_FUNC(sub_8316CC60);
PPC_FUNC_IMPL(__imp__sub_8316CC60) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// bne cr6,0x8316cca4
	if (!cr6.eq) goto loc_8316CCA4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32228
	ctx.r4.s64 = r11.s64 + -32228;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-2
	r11.s64 = -2;
loc_8316CC98:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8316cd1c
	goto loc_8316CD1C;
loc_8316CCA4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-32256
	ctx.r5.s64 = r11.s64 + -32256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,476
	ctx.r3.s64 = 476;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316ccd0
	if (cr0.eq) goto loc_8316CCD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316c9f0
	sub_8316C9F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8316CCD0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8316ccf0
	if (!cr6.eq) goto loc_8316CCF0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32296
	ctx.r4.s64 = r11.s64 + -32296;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// b 0x8316cc98
	goto loc_8316CC98;
loc_8316CCF0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// bne 0x8316cd18
	if (!cr0.eq) goto loc_8316CD18;
	// li r11,-1
	r11.s64 = -1;
	// b 0x8316cc98
	goto loc_8316CC98;
loc_8316CD18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8316CD1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316CD28"))) PPC_WEAK_FUNC(sub_8316CD28);
PPC_FUNC_IMPL(__imp__sub_8316CD28) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x831686d0
	sub_831686D0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316cdc4
	if (cr0.eq) goto loc_8316CDC4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316cdc4
	if (!cr6.eq) goto loc_8316CDC4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83172ac8
	sub_83172AC8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316cdb8
	if (cr0.eq) goto loc_8316CDB8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316cdb8
	if (!cr6.eq) goto loc_8316CDB8;
	// stw r30,464(r31)
	PPC_STORE_U32(r31.u32 + 464, r30.u32);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r5,r10,-29936
	ctx.r5.s64 = ctx.r10.s64 + -29936;
	// lwz r3,-29612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -29612);
	// bl 0x83172bd0
	sub_83172BD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8316cdec
	goto loc_8316CDEC;
loc_8316CDB8:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-32140
	ctx.r4.s64 = r11.s64 + -32140;
	// b 0x8316cdcc
	goto loc_8316CDCC;
loc_8316CDC4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-32192
	ctx.r4.s64 = r11.s64 + -32192;
loc_8316CDCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
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
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316CDEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CE08"))) PPC_WEAK_FUNC(sub_8316CE08);
PPC_FUNC_IMPL(__imp__sub_8316CE08) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r31,r3,-472
	r31.s64 = ctx.r3.s64 + -472;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,-472(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -472);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8316ce64
	if (cr0.eq) goto loc_8316CE64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8316CE64:
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

__attribute__((alias("__imp__sub_8316CE78"))) PPC_WEAK_FUNC(sub_8316CE78);
PPC_FUNC_IMPL(__imp__sub_8316CE78) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r26,0
	r26.s64 = 0;
	// addi r29,r11,-29936
	r29.s64 = r11.s64 + -29936;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316cf10
	if (cr6.eq) goto loc_8316CF10;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83172a88
	sub_83172A88(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8316cf00
	if (cr0.eq) goto loc_8316CF00;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-32088
	ctx.r4.s64 = r11.s64 + -32088;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r27,r11,-29624
	r27.s64 = r11.s64 + -29624;
loc_8316CEC8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// lwz r11,-4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8316cec8
	if (!cr6.eq) goto loc_8316CEC8;
loc_8316CF00:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x83172a18
	sub_83172A18(ctx, base);
	// stw r26,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r26.u32);
loc_8316CF10:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r3,-29612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -29612);
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316cf48
	if (cr6.eq) goto loc_8316CF48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r26.u32);
loc_8316CF48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8316CF50"))) PPC_WEAK_FUNC(sub_8316CF50);
PPC_FUNC_IMPL(__imp__sub_8316CF50) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,-456(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -456);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,-456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -456);
	// addi r3,r11,-456
	ctx.r3.s64 = r11.s64 + -456;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8316d07c
	if (cr0.eq) goto loc_8316D07C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316d07c
	if (!cr6.eq) goto loc_8316D07C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316d064
	if (!cr6.eq) goto loc_8316D064;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
	// lwz r11,52(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// b 0x8316cff0
	goto loc_8316CFF0;
loc_8316CFE0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8316d02c
	if (cr6.eq) goto loc_8316D02C;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
loc_8316CFF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8316cfe0
	if (!cr6.eq) goto loc_8316CFE0;
	// li r11,-1
	r11.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8316D01C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8316d094
	goto loc_8316D094;
loc_8316D02C:
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8316d098
	goto loc_8316D098;
loc_8316D064:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8316d01c
	goto loc_8316D01C;
loc_8316D07C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32004
	ctx.r4.s64 = r11.s64 + -32004;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8316D094:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8316D098:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316D0A0"))) PPC_WEAK_FUNC(sub_8316D0A0);
PPC_FUNC_IMPL(__imp__sub_8316D0A0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316d0fc
	if (cr6.eq) goto loc_8316D0FC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31964
	ctx.r4.s64 = r11.s64 + -31964;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316d0fc
	if (!cr6.eq) goto loc_8316D0FC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_8316D0FC:
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

__attribute__((alias("__imp__sub_8316D110"))) PPC_WEAK_FUNC(sub_8316D110);
PPC_FUNC_IMPL(__imp__sub_8316D110) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316d16c
	if (cr6.eq) goto loc_8316D16C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31916
	ctx.r4.s64 = r11.s64 + -31916;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316d16c
	if (!cr6.eq) goto loc_8316D16C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_8316D16C:
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

__attribute__((alias("__imp__sub_8316D180"))) PPC_WEAK_FUNC(sub_8316D180);
PPC_FUNC_IMPL(__imp__sub_8316D180) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8316cc60
	sub_8316CC60(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316d1cc
	if (cr0.eq) goto loc_8316D1CC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316d1cc
	if (!cr6.eq) goto loc_8316D1CC;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x8316d1d8
	goto loc_8316D1D8;
loc_8316D1CC:
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8316D1D8:
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

__attribute__((alias("__imp__sub_8316D1F0"))) PPC_WEAK_FUNC(sub_8316D1F0);
PPC_FUNC_IMPL(__imp__sub_8316D1F0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8316d180
	sub_8316D180(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8316d250
	if (cr0.eq) goto loc_8316D250;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316d250
	if (!cr6.eq) goto loc_8316D250;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r10,-29624
	ctx.r5.s64 = ctx.r10.s64 + -29624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8316d25c
	goto loc_8316D25C;
loc_8316D250:
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8316D25C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316D268"))) PPC_WEAK_FUNC(sub_8316D268);
PPC_FUNC_IMPL(__imp__sub_8316D268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316cf50
	sub_8316CF50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316D278"))) PPC_WEAK_FUNC(sub_8316D278);
PPC_FUNC_IMPL(__imp__sub_8316D278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316ce08
	sub_8316CE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316D288"))) PPC_WEAK_FUNC(sub_8316D288);
PPC_FUNC_IMPL(__imp__sub_8316D288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316d558
	sub_8316D558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316D298"))) PPC_WEAK_FUNC(sub_8316D298);
PPC_FUNC_IMPL(__imp__sub_8316D298) {
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,-29616(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29616);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-29616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29616, r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8316d2e4
	if (!cr6.eq) goto loc_8316D2E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316cb10
	sub_8316CB10(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316d2e4
	if (cr6.eq) goto loc_8316D2E4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8316D2E4:
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

__attribute__((alias("__imp__sub_8316D2F8"))) PPC_WEAK_FUNC(sub_8316D2F8);
PPC_FUNC_IMPL(__imp__sub_8316D2F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,-29616(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29616);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-29616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29616, r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-29624
	ctx.r3.s64 = r11.s64 + -29624;
	// b 0x8316cb98
	sub_8316CB98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316D320"))) PPC_WEAK_FUNC(sub_8316D320);
PPC_FUNC_IMPL(__imp__sub_8316D320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D328"))) PPC_WEAK_FUNC(sub_8316D328);
PPC_FUNC_IMPL(__imp__sub_8316D328) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,-472
	r30.s64 = r31.s64 + -472;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8316d0a0
	sub_8316D0A0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-29624
	ctx.r5.s64 = r11.s64 + -29624;
	// addi r3,r31,-280
	ctx.r3.s64 = r31.s64 + -280;
	// bl 0x831724c0
	sub_831724C0(ctx, base);
	// lwz r10,-384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -384);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,-384(r31)
	PPC_STORE_U32(r31.u32 + -384, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x8316d110
	sub_8316D110(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316D380"))) PPC_WEAK_FUNC(sub_8316D380);
PPC_FUNC_IMPL(__imp__sub_8316D380) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,-472
	r30.s64 = r31.s64 + -472;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8316d0a0
	sub_8316D0A0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r31,-280
	ctx.r3.s64 = r31.s64 + -280;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// bl 0x831725f0
	sub_831725F0(ctx, base);
	// lwz r11,-384(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -384);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,-384(r31)
	PPC_STORE_U32(r31.u32 + -384, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x8316d110
	sub_8316D110(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316D3D8"))) PPC_WEAK_FUNC(sub_8316D3D8);
PPC_FUNC_IMPL(__imp__sub_8316D3D8) {
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
	// bl 0x8316d0a0
	sub_8316D0A0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// addi r7,r11,-29624
	ctx.r7.s64 = r11.s64 + -29624;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83172858
	sub_83172858(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// bl 0x8316d110
	sub_8316D110(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316D438"))) PPC_WEAK_FUNC(sub_8316D438);
PPC_FUNC_IMPL(__imp__sub_8316D438) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// bl 0x831749a0
	sub_831749A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316d46c
	if (cr0.eq) goto loc_8316D46C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316d484
	if (cr6.eq) goto loc_8316D484;
loc_8316D46C:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316d480
	if (!cr6.eq) goto loc_8316D480;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_8316D480:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316D484:
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

__attribute__((alias("__imp__sub_8316D498"))) PPC_WEAK_FUNC(sub_8316D498);
PPC_FUNC_IMPL(__imp__sub_8316D498) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8316d0a0
	sub_8316D0A0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-29936
	ctx.r5.s64 = r11.s64 + -29936;
	// bl 0x83172bd0
	sub_83172BD0(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x8316d110
	sub_8316D110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316D4E8"))) PPC_WEAK_FUNC(sub_8316D4E8);
PPC_FUNC_IMPL(__imp__sub_8316D4E8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8316d0a0
	sub_8316D0A0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-29936
	ctx.r5.s64 = r11.s64 + -29936;
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x8316d110
	sub_8316D110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316D538"))) PPC_WEAK_FUNC(sub_8316D538);
PPC_FUNC_IMPL(__imp__sub_8316D538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316d380
	sub_8316D380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316D548"))) PPC_WEAK_FUNC(sub_8316D548);
PPC_FUNC_IMPL(__imp__sub_8316D548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316d328
	sub_8316D328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316D558"))) PPC_WEAK_FUNC(sub_8316D558);
PPC_FUNC_IMPL(__imp__sub_8316D558) {
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
	// addi r31,r3,-472
	r31.s64 = ctx.r3.s64 + -472;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,472
	ctx.r3.s64 = r31.s64 + 472;
	// bl 0x8316cac8
	sub_8316CAC8(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-32508
	r11.s64 = r11.s64 + -32508;
	// stw r11,472(r31)
	PPC_STORE_U32(r31.u32 + 472, r11.u32);
	// beq 0x8316d59c
	if (cr0.eq) goto loc_8316D59C;
	// li r4,476
	ctx.r4.s64 = 476;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_8316D59C:
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

__attribute__((alias("__imp__sub_8316D5B8"))) PPC_WEAK_FUNC(sub_8316D5B8);
PPC_FUNC_IMPL(__imp__sub_8316D5B8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8316d624
	if (cr0.eq) goto loc_8316D624;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316d624
	if (!cr6.eq) goto loc_8316D624;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r29,r11,-29624
	r29.s64 = r11.s64 + -29624;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x83173590
	sub_83173590(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316d498
	sub_8316D498(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8316d63c
	goto loc_8316D63C;
loc_8316D624:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316d638
	if (!cr6.eq) goto loc_8316D638;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_8316D638:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316D63C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316D648"))) PPC_WEAK_FUNC(sub_8316D648);
PPC_FUNC_IMPL(__imp__sub_8316D648) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-472
	r31.s64 = r30.s64 + -472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316d0a0
	sub_8316D0A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316d5b8
	sub_8316D5B8(ctx, base);
	// lwz r11,-384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -384);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,-384(r30)
	PPC_STORE_U32(r30.u32 + -384, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x8316d110
	sub_8316D110(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316D698"))) PPC_WEAK_FUNC(sub_8316D698);
PPC_FUNC_IMPL(__imp__sub_8316D698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316d648
	sub_8316D648(ctx, base);
	return;
}

