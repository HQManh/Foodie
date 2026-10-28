// rea decompile_all
// name: Coffee.UIExtensions.UIParticleRenderer$$GetModifiedMaterial
// address: 0x440445c
// body: available
// range: 0x440445c-0x44047a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44047a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Coffee_UIExtensions_UIParticleRenderer__GetModifiedMaterial(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((DAT_09517e91 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091782c0);
    FUN_03f5c2a4(&DAT_091d2b20);
    FUN_03f5c2a4(&DAT_09187e70);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f17f0);
    FUN_03f5c2a4(&DAT_09195768);
    FUN_03f5c2a4(&DAT_091becb8);
    DAT_09517e91 = 1;
  }
  local_58 = 0;
  local_60 = 0;
  uVar6 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if ((uVar6 & 1) == 0) {
LAB_044045d8:
    if (*(int *)(DAT_09187e70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Coffee_UIParticleInternal_MaterialRepository__Release(param_1 + 0x21);
    return param_2;
  }
  lVar10 = param_1[0x22];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(lVar10,0);
  if ((uVar6 & 1) == 0) goto LAB_044045d8;
  param_2 = UnityEngine_UI_MaskableGraphic__GetModifiedMaterial(param_1,param_2,0);
  lVar10 = (**(code **)(*param_1 + 0x368))(param_1,*(undefined8 *)(*param_1 + 0x370));
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar6 = UnityEngine_Object__op_Equality(lVar10,0,0);
  if ((uVar6 & 1) != 0) {
    if ((param_1[0x22] == 0) || (lVar8 = *(long *)(param_1[0x22] + 0xe8), lVar8 == 0))
    goto LAB_044047a4;
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_044045d8;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (param_2 == 0) goto LAB_044047a4;
    uVar3 = UnityEngine_Object__GetInstanceID(param_2,0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(lVar10,0);
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if (lVar10 == 0) goto LAB_044047a4;
    uVar4 = UnityEngine_Object__GetInstanceID(lVar10,0);
  }
  if ((param_1[0x22] != 0) && (lVar8 = *(long *)(param_1[0x22] + 0xe8), lVar8 != 0)) {
    if (*(long *)(lVar8 + 0x18) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = UnityEngine_Object__GetInstanceID(param_1,0);
    }
    UnityEngine_Hash128___ctor(&local_60,uVar3,uVar4,uVar5,0,0);
    uVar2 = local_58;
    uVar1 = local_60;
    lVar8 = param_1[0x21];
    if (*(int *)(DAT_09187e70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = Coffee_UIParticleInternal_MaterialRepository__Valid(uVar1,uVar2,lVar8);
    uVar2 = local_58;
    uVar1 = local_60;
    if ((uVar6 & 1) == 0) {
      if (*(int *)(DAT_09195768 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar9 = *(undefined8 **)(DAT_09195768 + 0xb8);
      lVar8 = puVar9[1];
      if (lVar8 == 0) {
        if (*(int *)(DAT_09195768 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar9 = *(undefined8 **)(DAT_09195768 + 0xb8);
        }
        uVar11 = *puVar9;
        lVar8 = thunk_FUN_03f9944c(DAT_091782c0);
        FUN_0530f3c8(lVar8,uVar11,DAT_091f17f0,0);
        plVar7 = (long *)(*(long *)(DAT_09195768 + 0xb8) + 8);
        *plVar7 = lVar8;
        thunk_FUN_03f5d7b8(plVar7,lVar8);
      }
      local_70 = 0;
      uStack_68 = 0;
      FUN_066cee64(&local_70,param_2,lVar10,DAT_091becb8);
      if (*(int *)(DAT_09187e70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04bfe288(uVar1,uVar2,param_1 + 0x21,lVar8,local_70,uStack_68,DAT_091d2b20);
    }
    return param_1[0x21];
  }
LAB_044047a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

