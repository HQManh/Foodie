// rea decompile_all
// name: CookingGraph.CookingBotFailureKnowledge$$ApplyTo
// address: 0x440c008
// body: available
// range: 0x440c008-0x440c2e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440c2e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingBotFailureKnowledge__ApplyTo(long param_1,long param_2)

{
  double dVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  
  if ((DAT_09517ed4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09517ed4 = 1;
  }
  if (param_2 != 0) {
    if (0 < *(int *)(param_1 + 0x14)) {
      fVar9 = *(float *)(param_2 + 0x1c);
      fVar4 = (float)CookingGraph_CookingBotFailureKnowledge__Clamp
                               (*(float *)(param_1 + 0x18) * -0.18 + 1.0,0x3e800000,0x3f800000);
      fVar6 = *(float *)(param_1 + 0x18);
      fVar10 = *(float *)(param_2 + 0x20);
      *(float *)(param_2 + 0x1c) = fVar9 * fVar4;
      fVar4 = (float)CookingGraph_CookingBotFailureKnowledge__Clamp
                               (1.0 - fVar6 * 0.25,0x3dcccccd,0x3f800000);
      fVar6 = *(float *)(param_1 + 0x18);
      fVar9 = *(float *)(param_2 + 0x2c);
      *(float *)(param_2 + 0x20) = fVar10 * fVar4;
      fVar4 = (float)CookingGraph_CookingBotFailureKnowledge__Clamp
                               (fVar6 * -0.16 + 1.0,0x3e4ccccd,0x3f800000);
      uVar5 = CookingGraph_CookingBotFailureKnowledge__Clamp(fVar9 * fVar4,0,0x3f800000);
      fVar4 = *(float *)(param_1 + 0x18);
      fVar6 = *(float *)(param_1 + 0x2c);
      uVar12 = NEON_fmov(0x3f800000,4);
      fVar9 = *(float *)(param_1 + 0x1c);
      *(undefined4 *)(param_2 + 0x2c) = uVar5;
      fVar10 = (float)uVar12;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      *(ulong *)(param_2 + 0x5c) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x5c) >> 0x20) *
                    (fVar4 * 0.45 + fVar13 + fVar9 * 0.15),
                    (float)*(undefined8 *)(param_2 + 0x5c) * (fVar4 * 0.3 + fVar10 + fVar6 * 0.1));
      uVar5 = CookingGraph_CookingBotFailureKnowledge__Clamp
                        (fVar4 * 0.05 + *(float *)(param_2 + 100),0,0x3f59999a);
      lVar2 = DAT_09187e80;
      fVar4 = *(float *)(param_2 + 0x68);
      fVar6 = *(float *)(param_1 + 0x30);
      *(undefined4 *)(param_2 + 100) = uVar5;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar1 = (double)System_Math__Pow(0,SUB84((double)fVar6,0),0);
      uVar5 = CookingGraph_CookingBotFailureKnowledge__Clamp
                        (fVar4 + ((float)dVar1 + -1.0) * 0.35,0,0x40a00000);
      fVar4 = *(float *)(param_1 + 0x1c);
      *(undefined4 *)(param_2 + 0x68) = uVar5;
      auVar8 = NEON_fmov(0x3f800000,4);
      *(ulong *)(param_2 + 0x24) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) *
                    (fVar4 * 0.65 + fVar13),
                    (float)*(undefined8 *)(param_2 + 0x24) * (fVar4 * 0.35 + fVar10));
      fVar7 = *(float *)(param_1 + 0x20);
      fVar11 = *(float *)(param_2 + 0x58);
      *(ulong *)(param_2 + 0x14) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20) *
                    (fVar7 * 0.25 + fVar13),
                    (float)*(undefined8 *)(param_2 + 0x14) * (fVar7 * 0.08 + fVar10));
      fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20);
      fVar4 = (float)*(undefined8 *)(param_1 + 0x24);
      fVar9 = fVar6 * 0.2 + auVar8._4_4_;
      *(ulong *)(param_2 + 0x50) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) *
                    (fVar6 * 0.3 + auVar8._12_4_),
                    (float)*(undefined8 *)(param_2 + 0x50) * (fVar6 * 0.45 + auVar8._8_4_));
      *(ulong *)(param_2 + 0x48) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20) *
                    (fVar4 * 0.4 + auVar8._4_4_),
                    (float)*(undefined8 *)(param_2 + 0x48) * (fVar4 * 0.55 + auVar8._0_4_));
      *(ulong *)(param_2 + 0x40) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20) *
                    (fVar7 * 0.2 + auVar8._12_4_),
                    (float)*(undefined8 *)(param_2 + 0x40) * (fVar7 * 0.5 + auVar8._8_4_));
      *(ulong *)(param_2 + 0x38) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20) * fVar9,
                    (float)*(undefined8 *)(param_2 + 0x38) * (fVar6 * 0.25 + auVar8._0_4_));
      fVar4 = *(float *)(param_1 + 0x2c);
      *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) * fVar9;
      fVar4 = (float)CookingGraph_CookingBotFailureKnowledge__Clamp(fVar4 * 0.15,0,0x3ee66666);
      uVar5 = CookingGraph_CookingBotFailureKnowledge__Clamp
                        (fVar11 + (1.0 - fVar11) * fVar4,0,0x3f800000);
      *(undefined4 *)(param_2 + 0x58) = uVar5;
    }
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar12 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_092228c0);
  System_ArgumentNullException___ctor(uVar12,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c6360);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar12,uVar3);
}

