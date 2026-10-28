// rea decompile_all
// name: DG.Tweening.Plugins.QuaternionPlugin$$SetFrom
// address: 0x4564e54
// body: available
// range: 0x4564e54-0x45652b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45652b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_QuaternionPlugin__SetFrom
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5
               ,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float extraout_s0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  undefined8 local_40;
  float local_38;
  float fStack_34;
  
  local_50 = 0.0;
  fStack_4c = 0.0;
  local_48 = 0.0;
  local_44 = 0.0;
  if ((param_6 == 0) || (lVar2 = *(long *)(param_6 + 0x170), lVar2 == 0)) goto LAB_045652b4;
  uVar8 = *(ulong *)(param_6 + 0x130);
  fVar24 = *(float *)(param_6 + 0x138);
  fVar3 = param_4;
  local_50 = (float)(**(code **)(lVar2 + 0x18))
                              (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  local_44 = fVar3;
  fStack_4c = param_2;
  local_48 = param_3;
  fVar3 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_50,0);
  uVar13 = (ulong)(uint)(param_2 * 57.29578);
  uVar16 = (ulong)(uint)(param_3 * 57.29578);
  uVar1 = UnityEngine_Quaternion__Internal_MakePositive(fVar3 * 57.29578,0);
  *(float *)(param_6 + 0x130) = extraout_s0;
  *(float *)(param_6 + 0x134) = (float)uVar13;
  *(float *)(param_6 + 0x138) = (float)uVar16;
  fVar21 = (float)uVar8;
  fVar3 = (float)(uVar8 >> 0x20);
  if (*(int *)(param_6 + 0x148) == 1) {
    fVar24 = fVar24 + (float)uVar16;
    uVar8 = (ulong)(uint)(fVar21 + extraout_s0);
    fVar3 = fVar3 + (float)uVar13;
LAB_04565250:
    fVar12 = fVar3;
    fVar6 = fVar24;
    fVar7 = (float)DG_Tweening_Plugins_QuaternionPlugin__GetEulerValForCalculations
                             (uVar8,uVar1,param_6);
    *(float *)(param_6 + 0x124) = fVar7;
    *(float *)(param_6 + 0x128) = fVar12;
    *(float *)(param_6 + 300) = fVar6;
  }
  else {
    if ((*(int *)(param_6 + 0x148) == 0) && (*(char *)(param_6 + 0xb0) == '\0')) goto LAB_04565250;
    lVar2 = *(long *)(param_6 + 0x170);
    if (lVar2 == 0) goto LAB_045652b4;
    fVar7 = extraout_s0;
    uVar1 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
    ;
    fVar33 = (float)uVar1;
    fVar12 = (float)uVar16;
    fVar31 = (float)uVar13;
    if (*(int *)(param_6 + 0x148) == 2) {
      local_40 = CONCAT44(fVar31,fVar33);
      local_38 = fVar12;
      fStack_34 = fVar7;
      fVar6 = fVar7;
      fVar4 = (float)UnityEngine_Quaternion__Internal_Inverse(&local_40,0);
      fVar27 = (float)uVar16;
      local_38 = fVar24 * 0.017453292;
      fVar15 = fVar12 * fVar6;
      fVar17 = fVar7 * fVar6;
      fVar10 = fVar7 * fVar27 + fVar15;
      local_40 = CONCAT44(fVar3 * 0.017453292,fVar21 * 0.017453292);
      fVar11 = fVar17 - fVar33 * fVar4;
      fVar14 = fVar11;
      fVar5 = (float)UnityEngine_Quaternion__Internal_FromEulerRad(&local_40,0);
      uVar20 = NEON_rev64(CONCAT44(fVar31,fVar7),4);
      fVar29 = (float)uVar13;
      fVar19 = (float)uVar20;
      uVar26 = NEON_ext(CONCAT44(fVar29,fVar6),uVar16,4,1);
      uVar18 = NEON_rev64(CONCAT44(fVar4,fVar27),4);
      uVar22 = NEON_ext(CONCAT44(fVar12,fVar19),uVar1,4,1);
      uVar1 = NEON_rev64(CONCAT44(fVar17,fVar15),4);
      fVar23 = (float)((ulong)uVar22 >> 0x20);
      fVar25 = (fVar19 * fVar27 + fVar33 * fVar6 + fVar7 * fVar4) - (float)uVar22 * (float)uVar26;
      fVar27 = (fVar12 * fVar4 + fVar7 * fVar29 + fVar31 * fVar6) -
               fVar23 * (float)((ulong)uVar26 >> 0x20);
      uVar26 = CONCAT44(fVar27,fVar25);
      fVar30 = (float)((ulong)uVar1 >> 0x20);
      fVar28 = (float)uVar1;
      fVar6 = (fVar10 + fVar33 * fVar29) - fVar19 * (float)uVar18;
      fVar4 = (fVar11 - fVar19 * fVar29) - fVar12 * (float)((ulong)uVar18 >> 0x20);
      uVar1 = NEON_rev64(uVar26,4);
      uVar18 = NEON_ext(CONCAT44(fVar5,fVar28),CONCAT44(fVar30,fVar14),4,1);
      uVar32 = NEON_ext(uVar26,CONCAT44(fVar4,fVar6),4,1);
      uVar26 = NEON_ext(CONCAT44(fVar4,fVar6),uVar26,4,1);
      uVar34 = NEON_rev64(uVar32,4);
      fVar29 = (float)((ulong)uVar18 >> 0x20);
      fVar11 = (fVar25 * fVar14 + fVar6 * fVar28 + (float)uVar26 * fVar15) -
               (float)uVar32 * (float)uVar18;
      fVar27 = (fVar27 * fVar30 + fVar4 * fVar5 + (float)((ulong)uVar26 >> 0x20) * fVar17) -
               (float)((ulong)uVar32 >> 0x20) * fVar29;
      uVar16 = CONCAT44(fVar27,fVar11);
      fVar10 = (fVar14 * fVar4 + (float)uVar1 * fVar28 + (float)uVar34 * (float)uVar18) -
               fVar25 * fVar15;
      fVar14 = ((fVar28 * fVar4 - (float)((ulong)uVar1 >> 0x20) * fVar5) -
               (float)((ulong)uVar34 >> 0x20) * fVar29) - fVar6 * fVar15;
      uVar8 = CONCAT44(fVar14,fVar10);
      uVar1 = NEON_ext(uVar8,uVar16,4,1);
      uVar18 = NEON_ext(uVar16,uVar8,4,1);
      uVar9 = (ulong)(uint)fVar27;
      local_50 = (fVar12 * fVar10 + fVar33 * fVar14 + fVar7 * fVar27) - fVar31 * fVar11;
      fStack_4c = (fVar33 * fVar11 + fVar7 * fVar10 + fVar19 * (float)uVar1) -
                  (float)uVar22 * (float)uVar18;
      local_48 = (fVar19 * fVar27 +
                 fVar12 * fVar14 + (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar1 >> 0x20)) -
                 fVar23 * (float)((ulong)uVar18 >> 0x20);
    }
    else {
      local_38 = fVar24 * 0.017453292;
      local_40 = CONCAT44(fVar3 * 0.017453292,fVar21 * 0.017453292);
      uVar8 = uVar13;
      fVar14 = fVar7;
      uVar9 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_40,0);
      fVar4 = (float)uVar8;
      fVar6 = (float)uVar16;
      uVar1 = NEON_ext(CONCAT44(fVar6,fVar14),uVar9,4,1);
      uVar18 = NEON_ext(CONCAT44(fVar33,fVar12),uVar13,4,1);
      local_50 = (fVar31 * fVar6 + fVar7 * (float)uVar9 + fVar33 * fVar14) - fVar12 * fVar4;
      fStack_4c = (fVar12 * (float)uVar9 + fVar31 * fVar14 + fVar7 * fVar4) -
                  (float)uVar18 * (float)uVar1;
      local_48 = (fVar33 * fVar4 + fVar7 * fVar6 + fVar12 * fVar14) -
                 (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar1 >> 0x20);
    }
    fVar6 = (float)uVar16;
    fVar12 = fVar12 * fVar6;
    local_44 = ((fVar7 * fVar14 - fVar33 * (float)uVar9) - fVar31 * (float)uVar8) - fVar12;
    fVar7 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_50,0);
    fVar12 = fVar12 * 57.29578;
    fVar6 = fVar6 * 57.29578;
    fVar7 = (float)UnityEngine_Quaternion__Internal_MakePositive(fVar7 * 57.29578,0);
    *(float *)(param_6 + 0x124) = fVar7;
    *(float *)(param_6 + 0x128) = fVar12;
    *(float *)(param_6 + 300) = fVar6;
    *(float *)(param_6 + 0x138) = -fVar24;
    *(ulong *)(param_6 + 0x130) = CONCAT44(-fVar3,-fVar21);
  }
  lVar2 = *(long *)(param_6 + 0x178);
  local_38 = fVar6 * 0.017453292;
  local_40 = CONCAT44(fVar12 * 0.017453292,fVar7 * 0.017453292);
  UnityEngine_Quaternion__Internal_FromEulerRad(&local_40,0);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
LAB_045652b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

