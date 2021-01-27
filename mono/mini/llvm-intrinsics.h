
/*
 * List of LLVM intrinsics
 *
 * INTRINS(id, llvm_id)
 *   To define a simple intrinsic
 * INTRINS_OVR(id, llvm_id)
 *   To define an overloaded intrinsic
 */

INTRINS_OVR(MEMSET, memset)
INTRINS_OVR(MEMCPY, memcpy)
INTRINS_OVR(MEMMOVE, memmove)
INTRINS_OVR(SADD_OVF_I32, sadd_with_overflow)
INTRINS_OVR(UADD_OVF_I32, uadd_with_overflow)
INTRINS_OVR(SSUB_OVF_I32, ssub_with_overflow)
INTRINS_OVR(USUB_OVF_I32, usub_with_overflow)
INTRINS_OVR(SMUL_OVF_I32, smul_with_overflow)
INTRINS_OVR(UMUL_OVF_I32, umul_with_overflow)
INTRINS_OVR(SADD_OVF_I64, sadd_with_overflow)
INTRINS_OVR(UADD_OVF_I64, uadd_with_overflow)
INTRINS_OVR(SSUB_OVF_I64, ssub_with_overflow)
INTRINS_OVR(USUB_OVF_I64, usub_with_overflow)
INTRINS_OVR(SMUL_OVF_I64, smul_with_overflow)
INTRINS_OVR(UMUL_OVF_I64, umul_with_overflow)
INTRINS_OVR(SIN, sin)
INTRINS_OVR(COS, cos)
INTRINS_OVR(SQRT, sqrt)
INTRINS_OVR(FLOOR, floor)
INTRINS_OVR(FLOORF, floor)
INTRINS_OVR(CEIL, ceil)
INTRINS_OVR(CEILF, ceil)
INTRINS_OVR(FMA, fma)
INTRINS_OVR(FMAF, fma)
	/* This isn't an intrinsic, instead llvm seems to special case it by name */
INTRINS_OVR(FABS, fabs)
INTRINS_OVR(ABSF, fabs)
INTRINS_OVR(SINF, sin)
INTRINS_OVR(COSF, cos)
INTRINS_OVR(SQRTF, sqrt)
INTRINS_OVR(POWF, pow)
INTRINS_OVR(POW, pow)
INTRINS_OVR(EXP, exp)
INTRINS_OVR(EXPF, exp)
INTRINS_OVR(LOG, log)
INTRINS_OVR(LOG2, log2)
INTRINS_OVR(LOG2F, log2)
INTRINS_OVR(LOG10, log10)
INTRINS_OVR(LOG10F, log10)
INTRINS_OVR(TRUNC, trunc)
INTRINS_OVR(TRUNCF, trunc)
INTRINS_OVR(COPYSIGN, copysign)
INTRINS_OVR(COPYSIGNF, copysign)
INTRINS_OVR(EXPECT_I8, expect)
INTRINS_OVR(EXPECT_I1, expect)
INTRINS_OVR(CTPOP_I32, ctpop)
INTRINS_OVR(CTPOP_I64, ctpop)
INTRINS_OVR(CTLZ_I32, ctlz)
INTRINS_OVR(CTLZ_I64, ctlz)
INTRINS_OVR(CTTZ_I32, cttz)
INTRINS_OVR(CTTZ_I64, cttz)
INTRINS(PREFETCH, prefetch)
INTRINS(BZHI_I32, x86_bmi_bzhi_32)
INTRINS(BZHI_I64, x86_bmi_bzhi_64)
INTRINS(BEXTR_I32, x86_bmi_bextr_32)
INTRINS(BEXTR_I64, x86_bmi_bextr_64)
INTRINS(PEXT_I32, x86_bmi_pext_32)
INTRINS(PEXT_I64, x86_bmi_pext_64)
INTRINS(PDEP_I32, x86_bmi_pdep_32)
INTRINS(PDEP_I64, x86_bmi_pdep_64)
#if defined(TARGET_AMD64) || defined(TARGET_X86)
INTRINS(SSE_PMOVMSKB, x86_sse2_pmovmskb_128)
INTRINS(SSE_MOVMSK_PS, x86_sse_movmsk_ps)
INTRINS(SSE_MOVMSK_PD, x86_sse2_movmsk_pd)
INTRINS(SSE_PSRLI_W, x86_sse2_psrli_w)
INTRINS(SSE_PSRAI_W, x86_sse2_psrai_w)
INTRINS(SSE_PSLLI_W, x86_sse2_pslli_w)
INTRINS(SSE_PSRLI_D, x86_sse2_psrli_d)
INTRINS(SSE_PSRAI_D, x86_sse2_psrai_d)
INTRINS(SSE_PSLLI_D, x86_sse2_pslli_d)
INTRINS(SSE_PSRLI_Q, x86_sse2_psrli_q)
INTRINS(SSE_PSLLI_Q, x86_sse2_pslli_q)
INTRINS(SSE_PSRL_W, x86_sse2_psrl_w)
INTRINS(SSE_PSRA_W, x86_sse2_psra_w)
INTRINS(SSE_PSRL_D, x86_sse2_psrl_d)
INTRINS(SSE_PSRA_D, x86_sse2_psra_d)
INTRINS(SSE_PSRL_Q, x86_sse2_psrl_q)
INTRINS(SSE_PSLL_W, x86_sse2_psll_w)
INTRINS(SSE_PSLL_D, x86_sse2_psll_d)
INTRINS(SSE_PSLL_Q, x86_sse2_psll_q)
#if LLVM_API_VERSION < 700
// These intrinsics were removed in LLVM 7 (bcaab53d479e7005ee69e06321bbb493f9b7f5e6).
INTRINS(SSE_SQRT_PS, x86_sse_sqrt_ps)
INTRINS(SSE_SQRT_SS, x86_sse_sqrt_ss)
INTRINS(SSE_SQRT_PD, x86_sse2_sqrt_pd)
INTRINS(SSE_SQRT_SD, x86_sse2_sqrt_sd)
INTRINS(SSE_PMULUDQ, x86_sse2_pmulu_dq)
#else
INTRINS_OVR(SSE_SQRT_PD, sqrt)
INTRINS_OVR(SSE_SQRT_PS, sqrt)
INTRINS_OVR(SSE_SQRT_SD, sqrt)
INTRINS_OVR(SSE_SQRT_SS, sqrt)
#endif
INTRINS(SSE_RCP_PS, x86_sse_rcp_ps)
INTRINS(SSE_RSQRT_PS, x86_sse_rsqrt_ps)
INTRINS(SSE_RCP_SS, x86_sse_rcp_ss)
INTRINS(SSE_RSQRT_SS, x86_sse_rsqrt_ss)
INTRINS(SSE_CVTTPD2DQ, x86_sse2_cvttpd2dq)
INTRINS(SSE_CVTTPS2DQ, x86_sse2_cvttps2dq)
INTRINS(SSE_CVTPD2DQ, x86_sse2_cvtpd2dq)
INTRINS(SSE_CVTPS2DQ, x86_sse2_cvtps2dq)
INTRINS(SSE_CVTPD2PS, x86_sse2_cvtpd2ps)
INTRINS(SSE_CVTSS2SI, x86_sse_cvtss2si)
INTRINS(SSE_CVTSS2SI64, x86_sse_cvtss2si64)
INTRINS(SSE_CVTTSS2SI, x86_sse_cvttss2si)
INTRINS(SSE_CVTTSS2SI64, x86_sse_cvttss2si64)
INTRINS(SSE_CVTSD2SI, x86_sse2_cvtsd2si)
INTRINS(SSE_CVTTSD2SI, x86_sse2_cvttsd2si)
INTRINS(SSE_CVTSD2SI64, x86_sse2_cvtsd2si64)
INTRINS(SSE_CVTTSD2SI64, x86_sse2_cvttsd2si64)
INTRINS(SSE_CVTSD2SS, x86_sse2_cvtsd2ss)
INTRINS(SSE_CMPPD, x86_sse2_cmp_pd)
INTRINS(SSE_CMPPS, x86_sse_cmp_ps)
INTRINS(SSE_CMPSS, x86_sse_cmp_ss)
INTRINS(SSE_CMPSD, x86_sse2_cmp_sd)
INTRINS(SSE_COMIEQ_SS, x86_sse_comieq_ss)
INTRINS(SSE_COMIGT_SS, x86_sse_comigt_ss)
INTRINS(SSE_COMIGE_SS, x86_sse_comige_ss)
INTRINS(SSE_COMILT_SS, x86_sse_comilt_ss)
INTRINS(SSE_COMILE_SS, x86_sse_comile_ss)
INTRINS(SSE_COMINEQ_SS, x86_sse_comineq_ss)
INTRINS(SSE_UCOMIEQ_SS, x86_sse_ucomieq_ss)
INTRINS(SSE_UCOMIGT_SS, x86_sse_ucomigt_ss)
INTRINS(SSE_UCOMIGE_SS, x86_sse_ucomige_ss)
INTRINS(SSE_UCOMILT_SS, x86_sse_ucomilt_ss)
INTRINS(SSE_UCOMILE_SS, x86_sse_ucomile_ss)
INTRINS(SSE_UCOMINEQ_SS, x86_sse_ucomineq_ss)
INTRINS(SSE_COMIEQ_SD, x86_sse2_comieq_sd)
INTRINS(SSE_COMIGT_SD, x86_sse2_comigt_sd)
INTRINS(SSE_COMIGE_SD, x86_sse2_comige_sd)
INTRINS(SSE_COMILT_SD, x86_sse2_comilt_sd)
INTRINS(SSE_COMILE_SD, x86_sse2_comile_sd)
INTRINS(SSE_COMINEQ_SD, x86_sse2_comineq_sd)
INTRINS(SSE_UCOMIEQ_SD, x86_sse2_ucomieq_sd)
INTRINS(SSE_UCOMIGT_SD, x86_sse2_ucomigt_sd)
INTRINS(SSE_UCOMIGE_SD, x86_sse2_ucomige_sd)
INTRINS(SSE_UCOMILT_SD, x86_sse2_ucomilt_sd)
INTRINS(SSE_UCOMILE_SD, x86_sse2_ucomile_sd)
INTRINS(SSE_UCOMINEQ_SD, x86_sse2_ucomineq_sd)
INTRINS(SSE_PACKSSWB, x86_sse2_packsswb_128)
INTRINS(SSE_PACKUSWB, x86_sse2_packuswb_128)
INTRINS(SSE_PACKSSDW, x86_sse2_packssdw_128)
INTRINS(SSE_PACKUSDW, x86_sse41_packusdw)
INTRINS(SSE_MINPS, x86_sse_min_ps)
INTRINS(SSE_MAXPS, x86_sse_max_ps)
INTRINS(SSE_MINSS, x86_sse_min_ss)
INTRINS(SSE_MAXSS, x86_sse_max_ss)
INTRINS(SSE_HADDPS, x86_sse3_hadd_ps)
INTRINS(SSE_HSUBPS, x86_sse3_hsub_ps)
INTRINS(SSE_ADDSUBPS, x86_sse3_addsub_ps)
INTRINS(SSE_MINPD, x86_sse2_min_pd)
INTRINS(SSE_MAXPD, x86_sse2_max_pd)
INTRINS(SSE_MAXSD, x86_sse2_max_sd)
INTRINS(SSE_MINSD, x86_sse2_min_sd)
INTRINS(SSE_HADDPD, x86_sse3_hadd_pd)
INTRINS(SSE_HSUBPD, x86_sse3_hsub_pd)
INTRINS(SSE_ADDSUBPD, x86_sse3_addsub_pd)
INTRINS(SSE_PMULHW, x86_sse2_pmulh_w)
INTRINS(SSE_PMULHU, x86_sse2_pmulhu_w)
INTRINS(SSE_PMULHUW, x86_sse2_pmulhu_w)
INTRINS(SSE_PMADDWD, x86_sse2_pmadd_wd)
INTRINS(SSE_PSADBW, x86_sse2_psad_bw)
INTRINS(SSE_PAUSE, x86_sse2_pause)
INTRINS(SSE_MASKMOVDQU, x86_sse2_maskmov_dqu)
INTRINS(SSE_PSHUFB, x86_ssse3_pshuf_b_128)
INTRINS(SSE_DPPS, x86_sse41_dpps)
INTRINS(SSE_DPPD, x86_sse41_dppd)
INTRINS(SSE_ROUNDSS, x86_sse41_round_ss)
INTRINS(SSE_ROUNDSD, x86_sse41_round_sd)
INTRINS(SSE_ROUNDPS, x86_sse41_round_ps)
INTRINS(SSE_ROUNDPD, x86_sse41_round_pd)
INTRINS(SSE_PTESTZ, x86_sse41_ptestz)
INTRINS(SSE_INSERTPS, x86_sse41_insertps)
INTRINS(SSE_SFENCE, x86_sse_sfence)
INTRINS(SSE_MFENCE, x86_sse2_mfence)
INTRINS(SSE_LFENCE, x86_sse2_lfence)
INTRINS(SSE_LDU_DQ, x86_sse3_ldu_dq)
INTRINS(SSE_PHADDW, x86_ssse3_phadd_w_128)
INTRINS(SSE_PHADDD, x86_ssse3_phadd_d_128)
INTRINS(SSE_PHADDSW, x86_ssse3_phadd_sw_128)
INTRINS(SSE_PHSUBW, x86_ssse3_phsub_w_128)
INTRINS(SSE_PHSUBD, x86_ssse3_phsub_d_128)
INTRINS(SSE_PHSUBSW, x86_ssse3_phsub_sw_128)
INTRINS(SSE_PMADDUBSW, x86_ssse3_pmadd_ub_sw_128)
INTRINS(SSE_PMULHRSW, x86_ssse3_pmul_hr_sw_128)
INTRINS(SSE_PSIGNB, x86_ssse3_psign_b_128)
INTRINS(SSE_PSIGNW, x86_ssse3_psign_w_128)
INTRINS(SSE_PSIGND, x86_ssse3_psign_d_128)
INTRINS(SSE_CRC32_32_8, x86_sse42_crc32_32_8)
INTRINS(SSE_CRC32_32_16, x86_sse42_crc32_32_16)
INTRINS(SSE_CRC32_32_32, x86_sse42_crc32_32_32)
INTRINS(SSE_CRC32_64_64, x86_sse42_crc32_64_64)
INTRINS(SSE_TESTC, x86_sse41_ptestc)
INTRINS(SSE_TESTNZ, x86_sse41_ptestnzc)
INTRINS(SSE_TESTZ, x86_sse41_ptestz)
INTRINS(SSE_PBLENDVB, x86_sse41_pblendvb)
INTRINS(SSE_BLENDVPS, x86_sse41_blendvps)
INTRINS(SSE_BLENDVPD, x86_sse41_blendvpd)
#if LLVM_API_VERSION < 700
// Clang 7 and above use a sequence of IR operations to represent pmuldq.
INTRINS(SSE_PMULDQ, x86_sse41_pmuldq)
#endif
INTRINS(SSE_PHMINPOSUW, x86_sse41_phminposuw)
INTRINS(SSE_MPSADBW, x86_sse41_mpsadbw)
INTRINS(PCLMULQDQ, x86_pclmulqdq)
INTRINS(AESNI_AESKEYGENASSIST, x86_aesni_aeskeygenassist)
INTRINS(AESNI_AESDEC, x86_aesni_aesdec)
INTRINS(AESNI_AESDECLAST, x86_aesni_aesdeclast)
INTRINS(AESNI_AESENC, x86_aesni_aesenc)
INTRINS(AESNI_AESENCLAST, x86_aesni_aesenclast)
INTRINS(AESNI_AESIMC, x86_aesni_aesimc)
#if LLVM_API_VERSION >= 800
	// these intrinsics were renamed in LLVM 8
INTRINS_OVR(SSE_SADD_SATI8, sadd_sat)
INTRINS_OVR(SSE_UADD_SATI8, uadd_sat)
INTRINS_OVR(SSE_SADD_SATI16, sadd_sat)
INTRINS_OVR(SSE_UADD_SATI16, uadd_sat)

INTRINS_OVR(SSE_SSUB_SATI8, ssub_sat)
INTRINS_OVR(SSE_USUB_SATI8, usub_sat)
INTRINS_OVR(SSE_SSUB_SATI16, ssub_sat)
INTRINS_OVR(SSE_USUB_SATI16, usub_sat)
#else
INTRINS(SSE_SADD_SATI8, x86_sse2_padds_b)
INTRINS(SSE_UADD_SATI8, x86_sse2_paddus_b)
INTRINS(SSE_SADD_SATI16, x86_sse2_padds_w)
INTRINS(SSE_UADD_SATI16, x86_sse2_paddus_w)

INTRINS(SSE_SSUB_SATI8, x86_sse2_psubs_b)
INTRINS(SSE_USUB_SATI8, x86_sse2_psubus_b)
INTRINS(SSE_SSUB_SATI16, x86_sse2_psubs_w)
INTRINS(SSE_USUB_SATI16, x86_sse2_psubus_w)
#endif
#endif
#if defined(TARGET_WASM) && LLVM_API_VERSION >= 800
INTRINS_OVR(WASM_ANYTRUE_V16, wasm_anytrue)
INTRINS_OVR(WASM_ANYTRUE_V8, wasm_anytrue)
INTRINS_OVR(WASM_ANYTRUE_V4, wasm_anytrue)
INTRINS_OVR(WASM_ANYTRUE_V2, wasm_anytrue)
#endif
#if defined(TARGET_ARM64)
INTRINS_OVR(BITREVERSE_I32, bitreverse)
INTRINS_OVR(BITREVERSE_I64, bitreverse)
INTRINS(AARCH64_CRC32B, aarch64_crc32b)
INTRINS(AARCH64_CRC32H, aarch64_crc32h)
INTRINS(AARCH64_CRC32W, aarch64_crc32w)
INTRINS(AARCH64_CRC32X, aarch64_crc32x)
INTRINS(AARCH64_CRC32CB, aarch64_crc32cb)
INTRINS(AARCH64_CRC32CH, aarch64_crc32ch)
INTRINS(AARCH64_CRC32CW, aarch64_crc32cw)
INTRINS(AARCH64_CRC32CX, aarch64_crc32cx)
INTRINS(AARCH64_SHA1C, aarch64_crypto_sha1c)
INTRINS(AARCH64_SHA1H, aarch64_crypto_sha1h)
INTRINS(AARCH64_SHA1M, aarch64_crypto_sha1m)
INTRINS(AARCH64_SHA1P, aarch64_crypto_sha1p)
INTRINS(AARCH64_SHA1SU0, aarch64_crypto_sha1su0)
INTRINS(AARCH64_SHA1SU1, aarch64_crypto_sha1su1)
INTRINS(AARCH64_SHA256SU0, aarch64_crypto_sha256su0)
INTRINS(AARCH64_SHA256SU1, aarch64_crypto_sha256su1)
INTRINS(AARCH64_SHA256H, aarch64_crypto_sha256h)
INTRINS(AARCH64_SHA256H2, aarch64_crypto_sha256h2)
#endif

#undef INTRINS
#undef INTRINS_OVR

