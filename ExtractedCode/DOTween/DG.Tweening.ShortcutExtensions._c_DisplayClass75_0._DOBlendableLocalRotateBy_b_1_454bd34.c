// rea decompile_all
// name: DG.Tweening.ShortcutExtensions.<>c__DisplayClass75_0$$<DOBlendableLocalRotateBy>b__1
// address: 0x454bd34
// body: available
// range: 0x454bd34-0x454c00f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x454c00c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_ShortcutExtensions_<>c__DisplayClass75_0__<DOBlendableLocalRotateBy>b__1
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  float fVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)(param_5 + 0x18);
  local_70 = *(undefined8 *)(param_5 + 0x10);
  uVar12 = param_2;
  uVar32 = param_3;
  uVar17 = param_4;
  fVar3 = (float)UnityEngine_Quaternion__Internal_Inverse(&local_70,0);
  fVar8 = (float)param_1;
  *(float *)(param_5 + 0x10) = fVar8;
  fVar6 = (float)param_2;
  *(float *)(param_5 + 0x14) = fVar6;
  fVar21 = (float)param_3;
  *(float *)(param_5 + 0x18) = fVar21;
  fVar7 = (float)param_4;
  *(float *)(param_5 + 0x1c) = fVar7;
  if (*(long *)(param_5 + 0x20) != 0) {
    uVar19 = param_1;
    uVar22 = uVar17;
    fVar4 = (float)UnityEngine_Transform__get_localRotation(*(long *)(param_5 + 0x20),0);
    lVar2 = *(long *)(param_5 + 0x20);
    fVar9 = (float)uVar19;
    local_70 = CONCAT44(fVar9,fVar4);
    fVar1 = (float)param_3;
    fVar16 = (float)uVar22;
    uStack_68 = CONCAT44(fVar16,fVar1);
    fVar14 = fVar1;
    fVar15 = fVar16;
    fVar10 = fVar9;
    fVar5 = (float)UnityEngine_Quaternion__Internal_Inverse(&local_70,0);
    if (lVar2 != 0) {
      fVar24 = (float)uVar32;
      fVar28 = (float)uVar17;
      fVar31 = (float)uVar12;
      uVar34 = NEON_ext(CONCAT44(fVar3,fVar24),uVar17,4,1);
      uVar12 = NEON_ext(CONCAT44(fVar1,fVar21),CONCAT44(fVar4,fVar16),4,1);
      uVar33 = NEON_ext(CONCAT44(fVar7,fVar8),param_2,4,1);
      uVar22 = NEON_ext(CONCAT44(fVar5,fVar3),CONCAT44(fVar14,fVar10),4,1);
      uVar35 = NEON_ext(CONCAT44(fVar21,fVar6),param_1,4,1);
      uVar29 = NEON_rev64(CONCAT44(fVar15,fVar28),4);
      uVar27 = NEON_rev64(CONCAT44(fVar16,fVar7),4);
      uVar19 = NEON_rev64(CONCAT44(fVar4,fVar16),4);
      fVar11 = (float)uVar12;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      uVar17 = NEON_ext(CONCAT44(fVar9,fVar6),uVar12,4,1);
      uVar32 = NEON_ext(CONCAT44(fVar31,fVar28),uVar32,4,1);
      fVar18 = (float)((ulong)uVar17 >> 0x20);
      fVar25 = ((fVar7 * fVar28 - fVar8 * fVar3) - fVar6 * fVar31) - fVar21 * fVar24;
      fVar26 = ((fVar16 * fVar15 - fVar4 * fVar5) - fVar9 * fVar10) - fVar1 * fVar14;
      fVar20 = (fVar4 * fVar10 + fVar11 * fVar15 + fVar16 * fVar14) - (float)uVar17 * (float)uVar22;
      fVar23 = (fVar9 * fVar14 + fVar13 * fVar5 + fVar4 * fVar15) -
               fVar18 * (float)((ulong)uVar22 >> 0x20);
      uVar30 = NEON_rev64(CONCAT44(fVar26,fVar25),4);
      fVar14 = (fVar11 * fVar5 + (float)uVar27 * fVar10 + fVar9 * (float)uVar29) - fVar4 * fVar14;
      fVar15 = (fVar8 * fVar31 +
               (float)((ulong)uVar27 >> 0x20) * fVar24 + fVar21 * (float)((ulong)uVar29 >> 0x20)) -
               fVar6 * fVar3;
      uVar12 = CONCAT44(fVar15,fVar14);
      fVar6 = (fVar6 * fVar24 + fVar8 * fVar28 + (float)uVar33 * (float)uVar34) -
              (float)uVar35 * (float)uVar32;
      fVar7 = (fVar21 * fVar3 +
              fVar7 * fVar31 + (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar34 >> 0x20)) -
              (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar32 >> 0x20);
      uVar32 = NEON_rev64(CONCAT44(fVar23,fVar26),4);
      uVar22 = NEON_rev64(uVar12,4);
      uVar29 = NEON_ext(CONCAT44(fVar7,fVar6),CONCAT44(fVar23,fVar20),4,1);
      uVar27 = NEON_ext(uVar12,CONCAT44(fVar7,fVar6),4,1);
      uVar12 = NEON_ext(CONCAT44(fVar23,fVar20),uVar12,4,1);
      fVar3 = (fVar6 * fVar20 + fVar14 * fVar25 + (float)uVar30 * (float)uVar29) -
              (float)uVar27 * (float)uVar12;
      fVar8 = (fVar7 * fVar23 +
              fVar15 * fVar26 + (float)((ulong)uVar30 >> 0x20) * (float)((ulong)uVar29 >> 0x20)) -
              (float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar12 >> 0x20);
      fVar21 = ((float)uVar32 * fVar25 + fVar26 * fVar6 + fVar14 * (float)uVar22) - fVar7 * fVar20;
      fVar7 = (((float)((ulong)uVar32 >> 0x20) * fVar25 - fVar23 * fVar6) -
              fVar7 * (float)((ulong)uVar22 >> 0x20)) - fVar15 * fVar20;
      uVar32 = NEON_ext(CONCAT44(fVar7,fVar21),CONCAT44(fVar8,fVar3),4,1);
      uVar12 = NEON_ext(CONCAT44(fVar8,fVar3),CONCAT44(fVar7,fVar21),4,1);
      fVar6 = (fVar4 * fVar8 +
              fVar9 * fVar7 + (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar32 >> 0x20)) -
              fVar18 * (float)((ulong)uVar12 >> 0x20);
      UnityEngine_Transform__set_localRotation
                (CONCAT44(fVar6,(fVar11 * fVar3 + fVar13 * fVar21 + (float)uVar19 * (float)uVar32) -
                                (float)uVar17 * (float)uVar12),fVar6,
                 (fVar9 * fVar21 + fVar1 * fVar7 + fVar16 * fVar8) - fVar4 * fVar3,
                 ((fVar16 * fVar7 - fVar4 * fVar21) - fVar9 * fVar3) - fVar1 * fVar8,lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

