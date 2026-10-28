// rea decompile_all
// name: Utilities.DraggableObjectEffectLiftShadow.<IETweenNormal>d__32$$MoveNext
// address: 0x4512690
// body: available
// range: 0x4512690-0x4512a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4512a88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_DraggableObjectEffectLiftShadow_<IETweenNormal>d__32__MoveNext
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  
  if ((DAT_09518542 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518542 = 1;
  }
  lVar2 = *(long *)(param_5 + 0x20);
  if (*(int *)(param_5 + 0x10) == 1) {
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_5 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    fVar5 = (float)UnityEngine_Time__get_time(0);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x50) == 0)) goto LAB_04512a88;
    local_50 = 0;
    uVar7 = 0x3c8efa35;
    *(float *)(param_5 + 0x28) = fVar5 + *(float *)(*(long *)(lVar2 + 0x50) + 0x14);
    local_48 = *(float *)(lVar2 + 100) * 0.017453292;
    uVar6 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_50,0);
    *(undefined4 *)(param_5 + 0x2c) = uVar6;
    *(undefined4 *)(param_5 + 0x30) = uVar7;
    *(float *)(param_5 + 0x34) = param_3;
    *(float *)(param_5 + 0x38) = param_4;
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar1 & 1) == 0) {
      uVar6 = 0;
      uVar7 = 0;
      param_3 = 0.0;
      param_4 = 1.0;
    }
    else {
      if (*(long *)(lVar2 + 0x40) == 0) goto LAB_04512a88;
      uVar6 = UnityEngine_SpriteRenderer__get_color(*(long *)(lVar2 + 0x40),0);
    }
    *(undefined4 *)(param_5 + 0x3c) = uVar6;
    *(undefined4 *)(param_5 + 0x40) = uVar7;
    *(float *)(param_5 + 0x44) = param_3;
    *(float *)(param_5 + 0x48) = param_4;
    *(undefined4 *)(param_5 + 0x48) = *(undefined4 *)(lVar2 + 0x80);
  }
  fVar5 = (float)UnityEngine_Time__get_time(0);
  if (fVar5 < *(float *)(param_5 + 0x28)) {
    fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x50) != 0)) {
      fVar8 = 50.0;
      fVar9 = *(float *)(*(long *)(lVar2 + 0x50) + 0x10);
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        fVar8 = 50.0;
        FUN_03f5c424();
      }
      fVar9 = fVar5 * 50.0 * fVar9;
      uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(lVar2 + 0x28);
        if (lVar4 == 0) goto LAB_04512a88;
        fVar5 = (float)UnityEngine_Transform__get_localPosition(lVar4,0);
        param_4 = fVar9 * (*(float *)(lVar2 + 0x58) - fVar5);
        fVar8 = fVar8 + fVar9 * (*(float *)(lVar2 + 0x5c) - fVar8);
        param_3 = param_3 + fVar9 * (*(float *)(lVar2 + 0x60) - param_3);
        UnityEngine_Transform__set_localPosition(fVar5 + param_4,lVar4,0);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x38);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(lVar2 + 0x38);
        if (lVar4 == 0) goto LAB_04512a88;
        uVar6 = UnityEngine_Transform__get_localRotation(lVar4,0);
        local_50 = CONCAT44(fVar8,uVar6);
        uStack_58 = *(undefined8 *)(param_5 + 0x34);
        local_60 = *(undefined8 *)(param_5 + 0x2c);
        local_48 = param_3;
        fStack_44 = param_4;
        UnityEngine_Quaternion__Internal_SlerpUnclamped(fVar9,&local_50,&local_60,0);
        UnityEngine_Transform__set_localRotation(lVar4,0);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(lVar2 + 0x30);
        if (lVar4 == 0) goto LAB_04512a88;
        fVar5 = (float)UnityEngine_Transform__get_localScale(lVar4,0);
        param_4 = fVar9 * (*(float *)(lVar2 + 0x68) - fVar5);
        fVar8 = fVar8 + fVar9 * (*(float *)(lVar2 + 0x6c) - fVar8);
        param_3 = param_3 + fVar9 * (*(float *)(lVar2 + 0x70) - param_3);
        UnityEngine_Transform__set_localScale(fVar5 + param_4,fVar8,param_3,lVar4,0);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x48);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(lVar2 + 0x48);
        if (lVar4 == 0) goto LAB_04512a88;
        fVar5 = (float)UnityEngine_Transform__get_localScale(lVar4,0);
        param_4 = fVar9 * (*(float *)(lVar2 + 0x74) - fVar5);
        fVar8 = fVar8 + fVar9 * (*(float *)(lVar2 + 0x78) - fVar8);
        param_3 = param_3 + fVar9 * (*(float *)(lVar2 + 0x7c) - param_3);
        UnityEngine_Transform__set_localScale(fVar5 + param_4,fVar8,param_3,lVar4,0);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x40);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(lVar2 + 0x40);
        if (lVar4 == 0) goto LAB_04512a88;
        fVar5 = (float)UnityEngine_SpriteRenderer__get_color(lVar4,0);
        fVar8 = fVar8 + ((float)((ulong)*(undefined8 *)(param_5 + 0x3c) >> 0x20) - fVar8) * fVar9;
        UnityEngine_SpriteRenderer__set_color
                  (CONCAT44(fVar8,fVar5 + ((float)*(undefined8 *)(param_5 + 0x3c) - fVar5) * fVar9),
                   fVar8,param_3 + ((float)*(undefined8 *)(param_5 + 0x44) - param_3) * fVar9,
                   param_4 + ((float)((ulong)*(undefined8 *)(param_5 + 0x44) >> 0x20) - param_4) *
                             fVar9,lVar4,0);
      }
      lVar2 = *(long *)(lVar2 + 0x90);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
      *(undefined8 *)(param_5 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),0);
      *(undefined4 *)(param_5 + 0x10) = 1;
      return 1;
    }
  }
  else if (lVar2 != 0) {
    Utilities_DraggableObjectEffectLiftShadow__SetNormalImmediate(lVar2,0);
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0xa8),0);
    return 0;
  }
LAB_04512a88:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

