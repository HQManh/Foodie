// rea decompile_all
// name: DG.Tweening.ShortcutExtensions.<>c__DisplayClass76_0$$<DOBlendablePunchRotation>b__1
// address: 0x454c01c
// body: available
// range: 0x454c01c-0x454c367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x454c364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_ShortcutExtensions_<>c__DisplayClass76_0__<DOBlendablePunchRotation>b__1
               (float param_1,float param_2,undefined8 param_3,undefined1 param_4 [16],long param_5)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar23;
  undefined8 uVar22;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 local_60;
  float local_58;
  float fStack_54;
  
  uVar17 = param_4._4_4_;
  fVar20 = param_4._0_4_;
  fVar14 = (float)param_3;
  local_58 = *(float *)(param_5 + 0x18) * 0.017453292;
  local_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20) * 0.017453292,
                      (float)*(undefined8 *)(param_5 + 0x10) * 0.017453292);
  fVar19 = local_58;
  uVar2 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_60,0);
  fVar3 = (float)param_3;
  local_58 = fVar14 * 0.017453292;
  uVar7 = (ulong)(uint)local_58;
  local_60 = CONCAT44(param_2 * 0.017453292,param_1 * 0.017453292);
  fVar16 = fVar20;
  uVar6 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_60,0);
  local_60 = CONCAT44(fVar19,uVar2);
  uVar8 = uVar7;
  uVar22 = param_3;
  fVar19 = fVar16;
  local_58 = fVar3;
  fStack_54 = fVar20;
  fVar3 = (float)UnityEngine_Quaternion__Internal_Inverse(&local_60,0);
  *(float *)(param_5 + 0x18) = fVar14;
  *(float *)(param_5 + 0x10) = param_1;
  *(float *)(param_5 + 0x14) = param_2;
  if (*(long *)(param_5 + 0x20) != 0) {
    uVar12 = uVar22;
    fVar14 = fVar19;
    fVar4 = (float)UnityEngine_Transform__get_rotation(*(long *)(param_5 + 0x20),0);
    lVar1 = *(long *)(param_5 + 0x20);
    local_60 = CONCAT44(param_1,fVar4);
    fVar10 = (float)uVar12;
    fVar20 = fVar14;
    local_58 = fVar10;
    fStack_54 = fVar14;
    fVar23 = fVar10;
    fVar25 = param_1;
    fVar5 = (float)UnityEngine_Quaternion__Internal_Inverse(&local_60,0);
    if (lVar1 != 0) {
      fVar27 = (float)uVar8;
      fVar24 = (float)uVar6;
      fVar28 = (float)param_3;
      fVar30 = (float)uVar22;
      fVar33 = (float)uVar7;
      uVar36 = NEON_ext(CONCAT44(param_1,fVar27),CONCAT44(uVar17,fVar19),4,1);
      uVar38 = NEON_ext(CONCAT44(fVar28,fVar33),uVar6,4,1);
      uVar12 = NEON_ext(CONCAT44(fVar10,fVar30),CONCAT44(fVar4,fVar14),4,1);
      uVar21 = NEON_rev64(CONCAT44(fVar4,fVar3),4);
      uVar29 = NEON_ext(CONCAT44(fVar23,fVar28),uVar7,4,1);
      uVar6 = NEON_rev64(CONCAT44(fVar4,fVar14),4);
      fVar11 = (float)uVar12;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      uVar37 = NEON_ext(CONCAT44(fVar5,fVar24),CONCAT44(fVar23,fVar25),4,1);
      uVar34 = NEON_ext(uVar12,uVar22,4,1);
      uVar12 = NEON_ext(CONCAT44(param_1,fVar27),uVar12,4,1);
      uVar26 = NEON_rev64(CONCAT44(fVar5,fVar24),4);
      fVar9 = (float)((ulong)uVar12 >> 0x20);
      uVar35 = NEON_ext(CONCAT44(fVar27,fVar3),uVar22,4,1);
      fVar15 = ((fVar19 * fVar16 - fVar3 * fVar24) - fVar27 * fVar33) - fVar30 * fVar28;
      fVar18 = ((fVar14 * fVar20 - fVar4 * fVar5) - param_1 * fVar25) - fVar10 * fVar23;
      fVar31 = (fVar4 * fVar25 + fVar11 * fVar20 + fVar14 * fVar23) - (float)uVar12 * (float)uVar37;
      fVar32 = (param_1 * fVar23 + fVar13 * fVar5 + fVar4 * fVar20) -
               fVar9 * (float)((ulong)uVar37 >> 0x20);
      uVar37 = NEON_rev64(CONCAT44(fVar18,fVar15),4);
      fVar20 = (fVar11 * (float)uVar26 + (float)uVar34 * fVar25 + (float)uVar36 * fVar20) -
               (float)uVar21 * (float)uVar29;
      fVar23 = (fVar27 * (float)((ulong)uVar26 >> 0x20) +
               (float)((ulong)uVar34 >> 0x20) * fVar16 + (float)((ulong)uVar36 >> 0x20) * fVar28) -
               (float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar29 >> 0x20);
      uVar22 = CONCAT44(fVar23,fVar20);
      fVar25 = (fVar33 * fVar30 + fVar3 * fVar16 + fVar24 * fVar19) - (float)uVar38 * (float)uVar35;
      fVar3 = (fVar28 * fVar3 + fVar27 * fVar16 + fVar33 * fVar19) -
              (float)((ulong)uVar38 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
      uVar21 = NEON_rev64(CONCAT44(fVar32,fVar18),4);
      uVar26 = NEON_rev64(uVar22,4);
      uVar34 = NEON_ext(CONCAT44(fVar3,fVar25),CONCAT44(fVar32,fVar31),4,1);
      uVar29 = NEON_ext(uVar22,CONCAT44(fVar3,fVar25),4,1);
      uVar22 = NEON_ext(CONCAT44(fVar32,fVar31),uVar22,4,1);
      fVar5 = ((float)uVar21 * fVar15 + fVar18 * fVar25 + fVar20 * (float)uVar26) - fVar3 * fVar31;
      fVar27 = (((float)((ulong)uVar21 >> 0x20) * fVar15 - fVar32 * fVar25) -
               fVar3 * (float)((ulong)uVar26 >> 0x20)) - fVar23 * fVar31;
      fVar16 = (fVar25 * fVar31 + fVar20 * fVar15 + (float)uVar37 * (float)uVar34) -
               (float)uVar29 * (float)uVar22;
      fVar19 = (fVar3 * fVar32 +
               fVar23 * fVar18 + (float)((ulong)uVar37 >> 0x20) * (float)((ulong)uVar34 >> 0x20)) -
               (float)((ulong)uVar29 >> 0x20) * (float)((ulong)uVar22 >> 0x20);
      uVar21 = NEON_ext(CONCAT44(fVar27,fVar5),CONCAT44(fVar19,fVar16),4,1);
      uVar22 = NEON_ext(CONCAT44(fVar19,fVar16),CONCAT44(fVar27,fVar5),4,1);
      fVar3 = (fVar4 * fVar19 +
              param_1 * fVar27 + (float)((ulong)uVar6 >> 0x20) * (float)((ulong)uVar21 >> 0x20)) -
              fVar9 * (float)((ulong)uVar22 >> 0x20);
      UnityEngine_Transform__set_rotation
                (CONCAT44(fVar3,(fVar11 * fVar16 + fVar13 * fVar5 + (float)uVar6 * (float)uVar21) -
                                (float)uVar12 * (float)uVar22),fVar3,
                 (param_1 * fVar5 + fVar10 * fVar27 + fVar14 * fVar19) - fVar4 * fVar16,
                 ((fVar14 * fVar27 - fVar4 * fVar5) - param_1 * fVar16) - fVar10 * fVar19,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

