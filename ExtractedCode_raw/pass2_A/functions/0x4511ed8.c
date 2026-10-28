// rea decompile_all
// name: Utilities.DraggableObjectEffectLiftShadow.<IETweenDrag>d__30$$MoveNext
// address: 0x4511ed8
// body: available
// range: 0x4511ed8-0x4512443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4512440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_DraggableObjectEffectLiftShadow_<IETweenDrag>d__30__MoveNext
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,long param_5)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  
  if ((DAT_0951853e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951853e = 1;
  }
  lVar4 = *(long *)(param_5 + 0x20);
  if (*(int *)(param_5 + 0x10) == 1) {
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_5 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    fVar5 = (float)UnityEngine_Time__get_time(0);
    cVar1 = DAT_09515faa;
    if ((lVar4 == 0) || (lVar3 = *(long *)(lVar4 + 0x50), lVar3 == 0)) goto LAB_04512440;
    *(float *)(param_5 + 0x28) = fVar5 + *(float *)(lVar3 + 0x14);
    uVar11 = *(undefined8 *)(lVar4 + 0x58);
    fVar5 = *(float *)(lVar4 + 0x60);
    if (cVar1 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      lVar3 = *(long *)(lVar4 + 0x50);
      DAT_09515faa = '\x01';
      if (lVar3 == 0) goto LAB_04512440;
    }
    fVar6 = *(float *)(lVar3 + 0x18);
    uVar9 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
    fVar10 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20);
    *(ulong *)(param_5 + 0x2c) =
         CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar9 >> 0x20) * fVar6,
                  (float)uVar11 + (float)uVar9 * fVar6);
    *(float *)(param_5 + 0x34) = fVar5 + fVar10 * fVar6;
    if (*(long *)(lVar4 + 0x50) == 0) goto LAB_04512440;
    fVar5 = (float)UnityEngine_Random__Range
                             (*(undefined4 *)(*(long *)(lVar4 + 0x50) + 0x24),0x3f800000,0);
    if (*(long *)(lVar4 + 0x50) == 0) goto LAB_04512440;
    fVar12 = *(float *)(*(long *)(lVar4 + 0x50) + 0x20);
    fVar6 = (float)UnityEngine_Random__get_value(0);
    fVar10 = fVar5 * fVar12;
    param_4 = -(fVar5 * fVar12);
    local_50 = 0;
    fVar5 = param_4;
    if (0.5 < fVar6) {
      fVar5 = fVar10;
    }
    *(float *)(param_5 + 0x38) = fVar5;
    uVar8 = 0x3c8efa35;
    local_48 = (fVar5 + *(float *)(lVar4 + 100)) * 0.017453292;
    uVar7 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_50,0);
    *(undefined4 *)(param_5 + 0x3c) = uVar7;
    *(undefined4 *)(param_5 + 0x40) = uVar8;
    *(float *)(param_5 + 0x44) = fVar10;
    *(float *)(param_5 + 0x48) = param_4;
    if (*(long *)(lVar4 + 0x50) == 0) goto LAB_04512440;
    fVar5 = *(float *)(*(long *)(lVar4 + 0x50) + 0x1c);
    fVar6 = *(float *)(lVar4 + 0x70);
    *(ulong *)(param_5 + 0x4c) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x68) >> 0x20) * fVar5,
                  (float)*(undefined8 *)(lVar4 + 0x68) * fVar5);
    *(float *)(param_5 + 0x54) = fVar6 * fVar5;
    lVar3 = DAT_09188ad0;
    if (*(long *)(lVar4 + 0x50) == 0) goto LAB_04512440;
    fVar5 = *(float *)(*(long *)(lVar4 + 0x50) + 0x28);
    param_3 = *(float *)(lVar4 + 0x7c);
    uVar9 = CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x74) >> 0x20) * fVar5,
                     (float)*(undefined8 *)(lVar4 + 0x74) * fVar5);
    *(undefined8 *)(param_5 + 0x58) = uVar9;
    *(float *)(param_5 + 0x60) = param_3 * fVar5;
    uVar11 = *(undefined8 *)(lVar4 + 0x40);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = (undefined4)uVar9;
    uVar2 = UnityEngine_Object__op_Implicit(uVar11,0);
    if ((uVar2 & 1) == 0) {
      uVar8 = 0;
      uVar7 = 0;
      param_3 = 0.0;
      param_4 = 1.0;
    }
    else {
      if (*(long *)(lVar4 + 0x40) == 0) goto LAB_04512440;
      uVar8 = UnityEngine_SpriteRenderer__get_color(*(long *)(lVar4 + 0x40),0);
    }
    *(undefined4 *)(param_5 + 100) = uVar8;
    *(undefined4 *)(param_5 + 0x68) = uVar7;
    *(float *)(param_5 + 0x6c) = param_3;
    *(float *)(param_5 + 0x70) = param_4;
    if (*(long *)(lVar4 + 0x50) == 0) goto LAB_04512440;
    *(float *)(param_5 + 0x70) =
         *(float *)(lVar4 + 0x80) * *(float *)(*(long *)(lVar4 + 0x50) + 0x2c);
  }
  fVar5 = (float)UnityEngine_Time__get_time(0);
  if (fVar5 < *(float *)(param_5 + 0x28)) {
    fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x50) != 0)) {
      fVar6 = 50.0;
      fVar10 = *(float *)(*(long *)(lVar4 + 0x50) + 0x10);
      uVar11 = *(undefined8 *)(lVar4 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        fVar6 = 50.0;
        FUN_03f5c424();
      }
      fVar10 = fVar5 * 50.0 * fVar10;
      uVar2 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(lVar4 + 0x28);
        if (lVar3 == 0) goto LAB_04512440;
        fVar5 = (float)UnityEngine_Transform__get_localPosition(lVar3,0);
        param_4 = fVar10 * (*(float *)(param_5 + 0x2c) - fVar5);
        fVar6 = fVar6 + fVar10 * (*(float *)(param_5 + 0x30) - fVar6);
        param_3 = param_3 + fVar10 * (*(float *)(param_5 + 0x34) - param_3);
        UnityEngine_Transform__set_localPosition(fVar5 + param_4,lVar3,0);
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x38);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(lVar4 + 0x38);
        if (lVar3 == 0) goto LAB_04512440;
        uVar7 = UnityEngine_Transform__get_localRotation(lVar3,0);
        local_50 = CONCAT44(fVar6,uVar7);
        uStack_58 = *(undefined8 *)(param_5 + 0x44);
        local_60 = *(undefined8 *)(param_5 + 0x3c);
        local_48 = param_3;
        fStack_44 = param_4;
        UnityEngine_Quaternion__Internal_SlerpUnclamped(fVar10,&local_50,&local_60,0);
        UnityEngine_Transform__set_localRotation(lVar3,0);
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(lVar4 + 0x30);
        if (lVar3 == 0) goto LAB_04512440;
        fVar5 = (float)UnityEngine_Transform__get_localScale(lVar3,0);
        param_4 = fVar10 * (*(float *)(param_5 + 0x4c) - fVar5);
        fVar6 = fVar6 + fVar10 * (*(float *)(param_5 + 0x50) - fVar6);
        param_3 = param_3 + fVar10 * (*(float *)(param_5 + 0x54) - param_3);
        UnityEngine_Transform__set_localScale(fVar5 + param_4,fVar6,param_3,lVar3,0);
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x48);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(lVar4 + 0x48);
        if (lVar3 == 0) goto LAB_04512440;
        fVar5 = (float)UnityEngine_Transform__get_localScale(lVar3,0);
        param_4 = fVar10 * (*(float *)(param_5 + 0x58) - fVar5);
        fVar6 = fVar6 + fVar10 * (*(float *)(param_5 + 0x5c) - fVar6);
        param_3 = param_3 + fVar10 * (*(float *)(param_5 + 0x60) - param_3);
        UnityEngine_Transform__set_localScale(fVar5 + param_4,fVar6,param_3,lVar3,0);
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x40);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(lVar4 + 0x40);
        if (lVar3 == 0) goto LAB_04512440;
        fVar5 = (float)UnityEngine_SpriteRenderer__get_color(lVar3,0);
        fVar6 = fVar6 + ((float)((ulong)*(undefined8 *)(param_5 + 100) >> 0x20) - fVar6) * fVar10;
        UnityEngine_SpriteRenderer__set_color
                  (CONCAT44(fVar6,fVar5 + ((float)*(undefined8 *)(param_5 + 100) - fVar5) * fVar10),
                   fVar6,param_3 + ((float)*(undefined8 *)(param_5 + 0x6c) - param_3) * fVar10,
                   param_4 + ((float)((ulong)*(undefined8 *)(param_5 + 0x6c) >> 0x20) - param_4) *
                             fVar10,lVar3,0);
      }
      lVar4 = *(long *)(lVar4 + 0x88);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      *(undefined8 *)(param_5 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),0);
      *(undefined4 *)(param_5 + 0x10) = 1;
      return 1;
    }
  }
  else if (lVar4 != 0) {
    Utilities_DraggableObjectEffectLiftShadow__SetDragImmediate(lVar4);
    uVar11 = *(undefined8 *)(lVar4 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar11,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(lVar4 + 0x38);
      local_50 = 0;
      local_48 = (*(float *)(lVar4 + 100) + *(float *)(param_5 + 0x38)) * 0.017453292;
      UnityEngine_Quaternion__Internal_FromEulerRad(&local_50,0);
      if (lVar3 == 0) goto LAB_04512440;
      UnityEngine_Transform__set_localRotation(lVar3,0);
    }
    *(undefined8 *)(lVar4 + 0xa8) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0xa8),0);
    return 0;
  }
LAB_04512440:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

