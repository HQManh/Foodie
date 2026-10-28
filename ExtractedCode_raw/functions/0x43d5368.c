// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$GetModifiedMaterial
// address: 0x43d5368
// body: available
// range: 0x43d5368-0x43d577b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d5778 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long ChocDino_UIFX_FilterBase__GetModifiedMaterial(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_09517c88 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e28);
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_091d4eb8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0920d720);
    FUN_03f5c2a4(&DAT_0920e9f8);
    DAT_09517c88 = 1;
  }
  *(undefined1 *)(param_1 + 0x32) = 1;
  uVar2 = ChocDino_UIFX_FilterBase__get_GraphicComponent(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return param_2;
  }
  uVar3 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
  if ((uVar3 & 1) == 0) {
    return param_2;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar3 & 1) == 0) {
    return param_2;
  }
  if (param_2 == 0) goto LAB_043d5778;
  uVar2 = UnityEngine_Material__get_shader(param_2,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) == 0) {
    return param_2;
  }
  plVar5 = param_1 + 0x1c;
  lVar6 = *plVar5;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(param_2,lVar6,0);
  if ((uVar3 & 1) != 0) {
    uVar2 = UnityEngine_Material__get_shader(param_2,0);
    if (*(int *)(DAT_09184e28 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184e28);
    }
    lVar6 = UnityEngine_UI_Graphic__get_defaultGraphicMaterial(0);
    if (lVar6 == 0) goto LAB_043d5778;
    uVar4 = UnityEngine_Material__get_shader(lVar6,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar2,uVar4,0);
    if ((uVar3 & 1) == 0) {
      bVar1 = 0;
      *(undefined1 *)(param_1 + 0x1d) = 0;
LAB_043d55a4:
      *(byte *)((long)param_1 + 0xe9) = bVar1;
    }
    else {
      lVar6 = UnityEngine_Material__get_shader(param_2,0);
      if ((lVar6 == 0) || (lVar6 = UnityEngine_Object__GetName(lVar6,0), lVar6 == 0))
      goto LAB_043d5778;
      bVar1 = System_String__StartsWith(lVar6,DAT_0920e9f8,0);
      *(byte *)(param_1 + 0x1d) = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        lVar6 = UnityEngine_Material__get_shader(param_2,0);
        if ((lVar6 == 0) || (lVar6 = UnityEngine_Object__GetName(lVar6,0), lVar6 == 0))
        goto LAB_043d5778;
        bVar1 = System_String__StartsWith(lVar6,DAT_0920d720,0);
        bVar1 = bVar1 & 1;
        goto LAB_043d55a4;
      }
    }
    *plVar5 = param_2;
    thunk_FUN_03f5d7b8(plVar5,param_2);
  }
  if ((char)param_1[0x1d] != '\0') {
    return param_2;
  }
  if (*(char *)((long)param_1 + 0xd9) != '\0') {
    return param_2;
  }
  plVar5 = param_1 + 0xb;
  lVar6 = *plVar5;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(lVar6,0,0);
  if ((uVar3 & 1) == 0) {
    lVar6 = param_1[0x12];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar6,0,0);
    if ((uVar3 & 1) == 0) {
      lVar6 = *plVar5;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar6,param_2,0);
      if ((uVar3 & 1) == 0) {
        if (param_1[0x12] == 0) {
LAB_043d5778:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = UnityEngine_Material__get_shader(param_1[0x12],0);
        uVar4 = UnityEngine_Material__get_shader(param_2,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar2,uVar4,0);
        if ((uVar3 & 1) == 0) goto LAB_043d56f8;
      }
    }
  }
  FUN_04c37370(param_1 + 0x12,DAT_091d4eb8);
  param_1[0xb] = param_2;
  thunk_FUN_03f5d7b8(plVar5,param_2);
  lVar6 = thunk_FUN_03f9944c(DAT_09187e28);
  UnityEngine_Material___ctor(lVar6,param_2,0);
  param_1[0x12] = lVar6;
  thunk_FUN_03f5d7b8(param_1 + 0x12,lVar6);
  bVar1 = ChocDino_UIFX_MaterialHelper__MaterialOutputsPremultipliedAlpha(param_2,0);
  *(byte *)(param_1 + 0x14) = bVar1 & 1;
LAB_043d56f8:
  lVar6 = param_1[0x12];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar6,0);
  if ((uVar3 & 1) != 0) {
    ChocDino_UIFX_FilterBase__SetupMaterialForRendering(param_1,param_2);
    if (((*(char *)((long)param_1 + 0xea) != '\0') || (0.0 < *(float *)((long)param_1 + 0x16c))) &&
       (uVar3 = (**(code **)(*param_1 + 0x348))(param_1,1,*(undefined8 *)(*param_1 + 0x350)),
       (uVar3 & 1) != 0)) {
      param_2 = param_1[0xe];
    }
    *(undefined1 *)((long)param_1 + 0xea) = 0;
  }
  return param_2;
}

