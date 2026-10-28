// rea decompile_all
// name: DG.Tweening.CustomPlugins.PureQuaternionPlugin$$SetFrom
// address: 0x456f010
// body: available
// range: 0x456f010-0x456f113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456f110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_CustomPlugins_PureQuaternionPlugin__SetFrom
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               undefined8 param_5,long param_6,ulong param_7)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_28;
  float fStack_24;
  
  if ((param_6 != 0) && (lVar1 = *(long *)(param_6 + 0x158), lVar1 != 0)) {
    auVar4 = *(undefined1 (*) [16])(param_6 + 0x134);
    fStack_28 = auVar4._8_4_;
    fStack_24 = auVar4._12_4_;
    fVar2 = (float)(**(code **)(lVar1 + 0x18))
                             (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    *(float *)(param_6 + 0x134) = fVar2;
    *(float *)(param_6 + 0x138) = param_2;
    fVar5 = param_3._0_4_;
    *(float *)(param_6 + 0x13c) = fVar5;
    *(float *)(param_6 + 0x140) = param_4;
    if ((param_7 & 1) != 0) {
      fVar11 = auVar4._0_4_;
      fVar12 = auVar4._4_4_;
      auVar6._4_4_ = fStack_24;
      auVar6._0_4_ = fStack_24;
      auVar6._8_4_ = fStack_24;
      auVar6._12_4_ = fStack_24;
      auVar6 = NEON_ext(auVar6,auVar4,4,1);
      fVar9 = fVar12 * fVar2;
      fVar10 = fVar12 * param_2;
      auVar7._0_4_ = fVar11 * param_2;
      auVar7._4_4_ = fVar12 * fVar5;
      auVar7._8_4_ = fStack_28 * fVar2;
      auVar7._12_4_ = fStack_28 * fVar5;
      auVar3._4_4_ = fVar9;
      auVar3._0_4_ = fVar11 * fVar5;
      auVar3._8_4_ = fStack_28 * param_2;
      auVar3._12_4_ = fVar10;
      auVar8._4_4_ = fVar9;
      auVar8._0_4_ = fVar11 * fVar5;
      auVar8._8_4_ = fStack_28 * param_2;
      auVar8._12_4_ = fVar10;
      auVar3 = NEON_ext(auVar3,auVar8,4,1);
      auVar8 = NEON_ext(auVar7,auVar7,0xc,1);
      auVar4._0_4_ = (fVar11 * param_4 + auVar6._0_4_ * fVar2 + auVar3._4_4_) - auVar7._4_4_;
      auVar4._4_4_ = (fVar12 * param_4 + auVar6._4_4_ * param_2 + auVar3._12_4_) - auVar7._8_4_;
      auVar4._8_4_ = (fStack_28 * param_4 + auVar6._8_4_ * fVar5 + fVar9) - auVar8._4_4_;
      auVar4._12_4_ = ((fStack_24 * param_4 - auVar6._12_4_ * fVar2) - fVar10) - auVar7._12_4_;
    }
    lVar1 = *(long *)(param_6 + 0x160);
    *(long *)(param_6 + 300) = auVar4._8_8_;
    *(long *)(param_6 + 0x124) = auVar4._0_8_;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0456f10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))
                (auVar4,auVar4._4_4_,auVar4._8_4_,auVar4._12_4_,*(undefined8 *)(lVar1 + 0x40),
                 *(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

