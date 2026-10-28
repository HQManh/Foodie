// rea decompile_all
// name: AnhPD.FoodOrder.DragItem$$GetTargetLocalScale
// address: 0x4112640
// body: available
// range: 0x4112640-0x411296b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4112968 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
AnhPD_FoodOrder_DragItem__GetTargetLocalScale
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5,
          long param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 local_170 [48];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 local_130 [16];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((DAT_09516203 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516203 = 1;
  }
  lVar1 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5);
  if (lVar1 != 0) {
    uVar2 = UnityEngine_Transform__GetParent(lVar1,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar3 & 1) == 0) {
      if (param_6 == 0) goto LAB_04112968;
      UnityEngine_Transform__get_localToWorldMatrix(&local_b0,param_6,0);
      uVar12 = local_9c;
      uVar14 = local_a0;
      uVar13 = local_98;
      uVar11 = uStack_88;
      uVar15 = local_90;
      uVar16 = uStack_8c;
    }
    else {
      lVar1 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5);
      if (((lVar1 == 0) || (lVar1 = UnityEngine_Transform__GetParent(lVar1,0), lVar1 == 0)) ||
         (UnityEngine_Transform__get_worldToLocalMatrix(&local_b0,lVar1,0), param_6 == 0))
      goto LAB_04112968;
      UnityEngine_Transform__get_localToWorldMatrix(&local_f0,param_6,0);
      uStack_138 = uStack_78;
      uStack_140 = uStack_80;
      uStack_1a8 = uStack_e8;
      local_1b0 = local_f0;
      uStack_198 = uStack_d8;
      uStack_1a0 = uStack_e0;
      uStack_188 = uStack_c8;
      local_190 = local_d0;
      uStack_178 = uStack_b8;
      uStack_180 = uStack_c0;
      FUN_04125f68(local_130,local_170,&local_1b0,0);
      param_3 = (float)local_d0;
      param_2 = (float)local_f0;
      uVar12 = uStack_11c;
      uVar14 = local_120;
      uVar13 = local_118;
      uVar11 = local_108;
      uVar15 = local_110;
      uVar16 = uStack_10c;
    }
    lVar1 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5);
    if (lVar1 != 0) {
      uVar2 = UnityEngine_Transform__GetParent(lVar1,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
      if ((uVar3 & 1) == 0) {
        local_b0 = (float)UnityEngine_Transform__get_rotation(param_6,0);
      }
      else {
        lVar1 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5);
        if ((lVar1 == 0) || (lVar1 = UnityEngine_Transform__GetParent(lVar1,0), lVar1 == 0))
        goto LAB_04112968;
        local_b0 = (float)UnityEngine_Transform__get_rotation(lVar1,0);
        fStack_ac = param_2;
        fStack_a8 = param_3;
        fStack_a4 = param_4;
        fVar4 = (float)UnityEngine_Quaternion__Internal_Inverse(&local_b0,0);
        fVar10 = param_4;
        fVar8 = param_2;
        fVar9 = param_3;
        fVar5 = (float)UnityEngine_Transform__get_rotation(param_6,0);
        fVar18 = param_2 * fVar5;
        fVar19 = param_3 * fVar9;
        fVar17 = param_2 * fVar8;
        local_b0 = (param_2 * fVar9 + param_4 * fVar5 + fVar4 * fVar10) - param_3 * fVar8;
        param_2 = (param_3 * fVar5 + param_4 * fVar8 + param_2 * fVar10) - fVar4 * fVar9;
        param_3 = (fVar4 * fVar8 + param_4 * fVar9 + param_3 * fVar10) - fVar18;
        param_4 = ((param_4 * fVar10 - fVar4 * fVar5) - fVar17) - fVar19;
      }
      fStack_ac = param_2;
      fStack_a8 = param_3;
      fStack_a4 = param_4;
      uVar6 = UnityEngine_Quaternion__Internal_Inverse(&local_b0,0);
      uVar7 = UnityEngine_Quaternion__op_Multiply(0);
      UnityEngine_Quaternion__op_Multiply(uVar6,param_2,param_3,param_4,uVar14,uVar12,uVar13,0);
      UnityEngine_Quaternion__op_Multiply(uVar6,param_2,param_3,param_4,uVar15,uVar16,uVar11,0);
      return uVar7;
    }
  }
LAB_04112968:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

