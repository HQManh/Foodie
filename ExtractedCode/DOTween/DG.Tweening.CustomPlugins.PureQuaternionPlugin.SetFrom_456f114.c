// rea decompile_all
// name: DG.Tweening.CustomPlugins.PureQuaternionPlugin$$SetFrom
// address: 0x456f114
// body: available
// range: 0x456f114-0x456f2b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456f2b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_CustomPlugins_PureQuaternionPlugin__SetFrom
               (float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
               long param_6,ulong param_7,uint param_8)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if ((param_8 & 1) == 0) {
    if (param_6 == 0) goto LAB_0456f2b0;
  }
  else {
    if ((param_6 == 0) || (lVar4 = *(long *)(param_6 + 0x158), lVar4 == 0)) goto LAB_0456f2b0;
    fVar6 = param_2;
    fVar7 = param_3;
    fVar8 = param_4;
    fVar5 = (float)(**(code **)(lVar4 + 0x18))
                             (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    pauVar1 = (undefined1 (*) [12])(param_6 + 0x134);
    fVar14 = (float)*(undefined8 *)(param_6 + 0x13c);
    fVar16 = (float)((ulong)*(undefined8 *)(param_6 + 0x13c) >> 0x20);
    fVar11 = (float)*(undefined8 *)*pauVar1;
    fVar12 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    fVar24 = param_4 * fVar6;
    fVar27 = param_4 * fVar7;
    auVar19._4_4_ = fVar16;
    auVar19._0_4_ = fVar16;
    auVar19._8_4_ = fVar16;
    auVar19._12_4_ = fVar16;
    auVar20._12_4_ = fVar16;
    auVar20._0_12_ = *pauVar1;
    auVar20 = NEON_ext(auVar19,auVar20,4,1);
    fVar9 = fVar5 * fVar12;
    fVar10 = fVar6 * fVar12;
    fVar13 = fVar7 * fVar12;
    fVar15 = fVar5 * fVar14;
    fVar17 = fVar7 * fVar14;
    fVar22 = param_4 * fVar5;
    auVar21._4_4_ = fVar9;
    auVar21._0_4_ = fVar7 * fVar11;
    auVar21._8_4_ = fVar6 * fVar14;
    auVar21._12_4_ = fVar10;
    auVar23._4_4_ = fVar9;
    auVar23._0_4_ = fVar7 * fVar11;
    auVar23._8_4_ = fVar6 * fVar14;
    auVar23._12_4_ = fVar10;
    auVar21 = NEON_ext(auVar21,auVar23,4,1);
    auVar2._4_4_ = fVar13;
    auVar2._0_4_ = fVar6 * fVar11;
    auVar2._8_4_ = fVar15;
    auVar2._12_4_ = fVar17;
    auVar3._4_4_ = fVar13;
    auVar3._0_4_ = fVar6 * fVar11;
    auVar3._8_4_ = fVar15;
    auVar3._12_4_ = fVar17;
    auVar23 = NEON_ext(auVar2,auVar3,0xc,1);
    fVar26 = param_2 * fVar5;
    fVar25 = param_1 * fVar6;
    fVar18 = param_1 * fVar7;
    param_4 = ((param_4 * fVar8 - param_1 * fVar5) - param_2 * fVar6) - param_3 * fVar7;
    param_1 = (param_3 * fVar6 + param_1 * fVar8 + fVar22) - param_2 * fVar7;
    param_2 = (fVar18 + param_2 * fVar8 + fVar24) - param_3 * fVar5;
    param_3 = (fVar26 + param_3 * fVar8 + fVar27) - fVar25;
    *(ulong *)(param_6 + 0x13c) =
         CONCAT44(((fVar16 * fVar8 - fVar5 * auVar20._12_4_) - fVar10) - fVar17,
                  (fVar14 * fVar8 + fVar7 * auVar20._8_4_ + fVar9) - auVar23._4_4_);
    *(ulong *)*pauVar1 =
         CONCAT44((fVar12 * fVar8 + fVar6 * auVar20._4_4_ + auVar21._12_4_) - fVar15,
                  (fVar11 * fVar8 + fVar5 * auVar20._0_4_ + auVar21._4_4_) - fVar13);
  }
  *(float *)(param_6 + 0x124) = param_1;
  *(float *)(param_6 + 0x128) = param_2;
  *(float *)(param_6 + 300) = param_3;
  *(float *)(param_6 + 0x130) = param_4;
  if ((param_7 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_6 + 0x160);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0456f298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))
              (param_1,param_2,param_3,param_4,*(undefined8 *)(lVar4 + 0x40),
               *(undefined8 *)(lVar4 + 0x28));
    return;
  }
LAB_0456f2b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

