// rea decompile_all
// name: DG.Tweening.CustomPlugins.PureQuaternionPlugin$$SetRelativeEndValue
// address: 0x456f2b8
// body: available
// range: 0x456f2b8-0x456f367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456f364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_CustomPlugins_PureQuaternionPlugin__SetRelativeEndValue
               (undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  if (param_2 != 0) {
    uVar1 = *(ulong *)(param_2 + 0x138);
    fVar6 = (float)(uVar1 >> 0x20);
    fVar16 = *(float *)(param_2 + 0x134);
    fVar12 = (float)*(undefined8 *)(param_2 + 300);
    fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 300) >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_2 + 0x124);
    fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x124) >> 0x20);
    fVar5 = (float)uVar1;
    auVar19 = NEON_ext(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16),4,1);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar1;
    auVar20 = NEON_ext(auVar19,auVar18,0xc,1);
    fVar17 = *(float *)(param_2 + 0x140);
    fVar7 = fVar16 * fVar10;
    fVar8 = fVar5 * fVar10;
    fVar11 = fVar6 * fVar10;
    fVar13 = fVar16 * fVar12;
    fVar15 = fVar6 * fVar12;
    auVar19._4_4_ = fVar7;
    auVar19._0_4_ = fVar6 * fVar9;
    auVar19._8_4_ = fVar5 * fVar12;
    auVar19._12_4_ = fVar8;
    auVar2._4_4_ = fVar7;
    auVar2._0_4_ = fVar6 * fVar9;
    auVar2._8_4_ = fVar5 * fVar12;
    auVar2._12_4_ = fVar8;
    auVar18 = NEON_ext(auVar19,auVar2,4,1);
    auVar3._4_4_ = fVar11;
    auVar3._0_4_ = fVar5 * fVar9;
    auVar3._8_4_ = fVar13;
    auVar3._12_4_ = fVar15;
    auVar4._4_4_ = fVar11;
    auVar4._0_4_ = fVar5 * fVar9;
    auVar4._8_4_ = fVar13;
    auVar4._12_4_ = fVar15;
    auVar19 = NEON_ext(auVar3,auVar4,0xc,1);
    *(ulong *)(param_2 + 0x13c) =
         CONCAT44(((fVar14 * fVar17 - fVar16 * fVar9) - fVar8) - fVar15,
                  (fVar12 * fVar17 + fVar14 * auVar20._8_4_ + fVar7) - auVar19._4_4_);
    *(ulong *)(param_2 + 0x134) =
         CONCAT44((fVar10 * fVar17 + fVar14 * auVar20._4_4_ + auVar18._12_4_) - fVar13,
                  (fVar9 * fVar17 + fVar14 * auVar20._0_4_ + auVar18._4_4_) - fVar11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

