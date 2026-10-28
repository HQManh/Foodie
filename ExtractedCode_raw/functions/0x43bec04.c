// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$Update
// address: 0x43bec04
// body: available
// range: 0x43bec04-0x43bee6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bee68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterStackTextMeshPro__Update(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_09517b6c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b6c = 1;
  }
  if ((*(int *)(param_1 + 0xac) != 1) && (*(char *)(param_1 + 0xa7) == '\0')) {
    return;
  }
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  local_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_48 = *(undefined8 *)(param_1 + 0x110);
  local_50 = *(undefined8 *)(param_1 + 0x108);
  uStack_38 = *(undefined8 *)(param_1 + 0x120);
  uStack_40 = *(undefined8 *)(param_1 + 0x118);
  lVar2 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar2 == 0) goto LAB_043bee68;
  UnityEngine_Transform__get_localToWorldMatrix(&local_b0,lVar2,0);
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  uStack_d8 = uStack_58;
  uStack_e0 = uStack_60;
  uStack_c8 = uStack_48;
  local_d0 = local_50;
  uStack_b8 = uStack_38;
  uStack_c0 = uStack_40;
  uStack_128 = uStack_a8;
  local_130 = local_b0;
  uStack_118 = uStack_98;
  uStack_120 = uStack_a0;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_f8 = uStack_78;
  uStack_100 = uStack_80;
  uVar3 = ChocDino_UIFX_MathUtils__HasMatrixChanged(&local_f0,&local_130,0,0);
  if ((uVar3 & 1) != 0) {
    lVar2 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar2 == 0) goto LAB_043bee68;
    UnityEngine_Transform__get_localToWorldMatrix(&local_70,lVar2,0);
    *(undefined8 *)(param_1 + 0xf0) = uStack_68;
    *(undefined8 *)(param_1 + 0xe8) = local_70;
    *(undefined8 *)(param_1 + 0x100) = uStack_58;
    *(undefined8 *)(param_1 + 0xf8) = uStack_60;
    *(undefined8 *)(param_1 + 0x110) = uStack_48;
    *(undefined8 *)(param_1 + 0x108) = local_50;
    *(undefined8 *)(param_1 + 0x120) = uStack_38;
    *(undefined8 *)(param_1 + 0x118) = uStack_40;
  }
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_043bee68;
  uVar4 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar5 & 1) == 0) goto LAB_043bee18;
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (lVar2 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0), lVar2 == 0))
  goto LAB_043bee68;
  iVar1 = UnityEngine_Canvas__get_renderMode(lVar2,0);
  if (iVar1 == 2) {
    lVar2 = ChocDino_UIFX_FilterStackTextMeshPro__GetRenderCamera(param_1);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Implicit(lVar2,0);
    if ((uVar5 & 1) == 0) goto LAB_043bee18;
    uStack_68 = *(undefined8 *)(param_1 + 0x130);
    local_70 = *(undefined8 *)(param_1 + 0x128);
    uStack_58 = *(undefined8 *)(param_1 + 0x140);
    uStack_60 = *(undefined8 *)(param_1 + 0x138);
    uStack_48 = *(undefined8 *)(param_1 + 0x150);
    local_50 = *(undefined8 *)(param_1 + 0x148);
    uStack_38 = *(undefined8 *)(param_1 + 0x160);
    uStack_40 = *(undefined8 *)(param_1 + 0x158);
    if ((lVar2 == 0) || (lVar6 = UnityEngine_Component__get_transform(lVar2,0), lVar6 == 0))
    goto LAB_043bee68;
    UnityEngine_Transform__get_localToWorldMatrix(&local_b0,lVar6,0);
    uStack_168 = uStack_68;
    local_170 = local_70;
    uStack_158 = uStack_58;
    uStack_160 = uStack_60;
    uStack_148 = uStack_48;
    local_150 = local_50;
    uStack_138 = uStack_38;
    uStack_140 = uStack_40;
    uStack_1a8 = uStack_a8;
    local_1b0 = local_b0;
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_188 = uStack_88;
    local_190 = local_90;
    uStack_178 = uStack_78;
    uStack_180 = uStack_80;
    uVar5 = ChocDino_UIFX_MathUtils__HasMatrixChanged(&local_170,&local_1b0,0,0);
    if ((uVar5 & 1) == 0) goto LAB_043bee18;
    lVar2 = UnityEngine_Component__get_transform(lVar2,0);
    if (lVar2 == 0) goto LAB_043bee68;
    UnityEngine_Transform__get_localToWorldMatrix(&local_70,lVar2,0);
    *(undefined8 *)(param_1 + 0x130) = uStack_68;
    *(undefined8 *)(param_1 + 0x128) = local_70;
    *(undefined8 *)(param_1 + 0x140) = uStack_58;
    *(undefined8 *)(param_1 + 0x138) = uStack_60;
    *(undefined8 *)(param_1 + 0x150) = uStack_48;
    *(undefined8 *)(param_1 + 0x148) = local_50;
    *(undefined8 *)(param_1 + 0x160) = uStack_38;
    *(undefined8 *)(param_1 + 0x158) = uStack_40;
  }
  else {
LAB_043bee18:
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  plVar7 = (long *)ChocDino_UIFX_FilterStackTextMeshPro__get_GraphicComponent(param_1);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x2f8))(plVar7,*(undefined8 *)(*plVar7 + 0x300));
    plVar7 = (long *)ChocDino_UIFX_FilterStackTextMeshPro__get_GraphicComponent(param_1);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x308))(plVar7,*(undefined8 *)(*plVar7 + 0x310));
      return;
    }
  }
LAB_043bee68:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

