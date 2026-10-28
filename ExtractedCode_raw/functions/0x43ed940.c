// rea decompile_all
// name: Coffee.UIEffects.UIEffect$$SavePreset
// address: 0x43ed940
// body: available
// range: 0x43ed940-0x43ede13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ede10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffect__SavePreset(long param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 local_50;
  undefined4 local_48;
  
  if ((DAT_09517dcc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bee38);
    DAT_09517dcc = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((param_3 & 1) == 0) {
    if ((param_1 == 0) || (param_2 == 0)) goto LAB_043ede10;
    uVar8 = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_2 + 0x1c) = uVar8;
LAB_043eda00:
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0xa4);
    uVar10 = *(undefined8 *)(param_1 + 0xac);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0xb4);
    *(undefined8 *)(param_2 + 0x28) = uVar10;
    uVar1 = *(undefined1 *)(param_1 + 0xbc);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined1 *)(param_2 + 0x38) = uVar1;
    if ((param_3 & 1) != 0) goto LAB_043eda24;
    uVar10 = *(undefined8 *)(param_1 + 0xc4);
    iVar5 = *(int *)(param_1 + 0xd0);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined8 *)(param_2 + 0x40) = uVar10;
LAB_043eda60:
    uVar8 = *(undefined4 *)(param_1 + 0xd4);
    uVar1 = *(undefined1 *)(param_1 + 0xd8);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0xe0);
    *(int *)(param_2 + 0x48) = iVar5;
    *(undefined4 *)(param_2 + 0x4c) = uVar8;
    *(undefined1 *)(param_2 + 0x50) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0xf8);
    uVar1 = *(undefined1 *)(param_1 + 0x104);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x100);
    uVar10 = *(undefined8 *)(param_1 + 0x108);
    *(undefined1 *)(param_2 + 0x7c) = uVar1;
    *(undefined8 *)(param_2 + 0x80) = uVar10;
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 0x110);
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x118);
    uVar10 = *(undefined8 *)(param_1 + 0x11c);
    *(undefined8 *)(param_2 + 0x9c) = *(undefined8 *)(param_1 + 0x124);
    *(undefined8 *)(param_2 + 0x94) = uVar10;
    *(undefined2 *)(param_2 + 0xa4) = *(undefined2 *)(param_1 + 300);
    lVar3 = *(long *)(param_1 + 0x138);
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_1 + 0x130);
    if (lVar3 == 0) goto LAB_043ede10;
    lVar7 = *(long *)(param_2 + 0xb0);
    uVar10 = UnityEngine_Gradient__get_colorKeys(lVar3,0);
    if ((*(long *)(param_1 + 0x138) == 0) ||
       (uVar4 = UnityEngine_Gradient__get_alphaKeys(*(long *)(param_1 + 0x138),0), lVar7 == 0))
    goto LAB_043ede10;
    UnityEngine_Gradient__SetKeys(lVar7,uVar10,uVar4,0);
    if (*(long *)(param_1 + 0x138) == 0) goto LAB_043ede10;
    lVar3 = *(long *)(param_2 + 0xb0);
    uVar8 = UnityEngine_Gradient__get_mode(*(long *)(param_1 + 0x138),0);
    if (lVar3 == 0) goto LAB_043ede10;
    UnityEngine_Gradient__set_mode(lVar3,uVar8,0);
    if ((param_3 & 1) != 0) goto LAB_043edb54;
    iVar5 = *(int *)(param_1 + 0x140);
LAB_043edb68:
    *(int *)(param_2 + 0xb8) = iVar5;
    uVar10 = *(undefined8 *)(param_1 + 0x144);
    *(undefined8 *)(param_2 + 0xc4) = *(undefined8 *)(param_1 + 0x14c);
    *(undefined8 *)(param_2 + 0xbc) = uVar10;
    *(undefined8 *)(param_2 + 0xcc) = *(undefined8 *)(param_1 + 0x154);
    if ((param_3 & 1) != 0) goto LAB_043edb84;
    iVar5 = *(int *)(param_1 + 0x15c);
LAB_043edb9c:
    uVar8 = *(undefined4 *)(param_1 + 0x160);
    uVar9 = *(undefined4 *)(param_1 + 0x164);
    *(int *)(param_2 + 0xd4) = iVar5;
    local_48 = 0;
    local_50 = 0;
    FUN_066e7490(&local_50,iVar5,uVar8,uVar9,DAT_091bee38);
    uVar10 = Coffee_UIEffects_BlendTypeConverter__Convert(local_50,local_48);
    *(undefined8 *)(param_2 + 0xd8) = uVar10;
    if ((param_3 & 1) != 0) goto LAB_043edbd8;
    iVar5 = *(int *)(param_1 + 0x168);
LAB_043edbec:
    *(int *)(param_2 + 0xe0) = iVar5;
    *(undefined8 *)(param_2 + 0xe4) = *(undefined8 *)(param_1 + 0x16c);
    uVar8 = *(undefined4 *)(param_1 + 0x174);
    *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_1 + 0x178);
    uVar9 = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)(param_2 + 0xec) = uVar8;
    uVar8 = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_2 + 0xf8) = uVar9;
    *(undefined4 *)(param_2 + 0xfc) = uVar8;
    uVar10 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_2 + 0x100) = uVar10;
    *(undefined1 *)(param_2 + 0x110) = *(undefined1 *)(param_1 + 0x198);
    if ((param_3 & 1) != 0) goto LAB_043edc30;
    iVar5 = *(int *)(param_1 + 0x204);
LAB_043edc44:
    uVar9 = *(undefined4 *)(param_1 + 0x224);
    *(int *)(param_2 + 0x17c) = iVar5;
    uVar8 = *(undefined4 *)(param_1 + 0x20c);
    *(undefined4 *)(param_2 + 0x19c) = uVar9;
    uVar9 = *(undefined4 *)(param_1 + 0x208);
    *(undefined4 *)(param_2 + 0x184) = uVar8;
    *(undefined4 *)(param_2 + 0x180) = uVar9;
    uVar10 = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_2 + 0x188) = uVar10;
    uVar10 = *(undefined8 *)(param_1 + 0x228);
    *(undefined1 *)(param_2 + 0x198) = *(undefined1 *)(param_1 + 0x220);
    uVar8 = *(undefined4 *)(param_1 + 0x230);
    *(undefined8 *)(param_2 + 0x1a0) = uVar10;
    *(undefined4 *)(param_2 + 0x1a8) = uVar8;
    if ((param_3 & 1) != 0) goto LAB_043edc88;
    iVar5 = *(int *)(param_1 + 0x19c);
LAB_043edc9c:
    uVar9 = *(undefined4 *)(param_1 + 0x1a0);
    *(int *)(param_2 + 0x114) = iVar5;
    uVar8 = *(undefined4 *)(param_1 + 0x1a4);
    *(undefined4 *)(param_2 + 0x118) = uVar9;
    *(undefined4 *)(param_2 + 0x11c) = uVar8;
    uVar10 = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(param_2 + 0x120) = uVar10;
    uVar10 = *(undefined8 *)(param_1 + 0x1b8);
    *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined8 *)(param_2 + 0x130) = uVar10;
    uVar10 = *(undefined8 *)(param_1 + 0x1c8);
    *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_1 + 0x1d0);
    *(undefined8 *)(param_2 + 0x140) = uVar10;
    uVar10 = *(undefined8 *)(param_1 + 0x1d8);
    *(undefined8 *)(param_2 + 0x158) = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_2 + 0x150) = uVar10;
    if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_043ede10;
    lVar3 = *(long *)(param_2 + 0x160);
    uVar10 = UnityEngine_Gradient__get_colorKeys(*(long *)(param_1 + 0x1e8),0);
    if ((*(long *)(param_1 + 0x1e8) == 0) ||
       (uVar4 = UnityEngine_Gradient__get_alphaKeys(*(long *)(param_1 + 0x1e8),0), lVar3 == 0))
    goto LAB_043ede10;
    UnityEngine_Gradient__SetKeys(lVar3,uVar10,uVar4,0);
    if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_043ede10;
    lVar3 = *(long *)(param_2 + 0x160);
    uVar8 = UnityEngine_Gradient__get_mode(*(long *)(param_1 + 0x1e8),0);
    if (lVar3 == 0) goto LAB_043ede10;
    UnityEngine_Gradient__set_mode(lVar3,uVar8,0);
    uVar8 = *(undefined4 *)(param_1 + 0x1fc);
    uVar1 = *(undefined1 *)(param_1 + 0x200);
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_1 + 0x1f0);
    uVar9 = *(undefined4 *)(param_1 + 0x1f8);
    *(undefined4 *)(param_2 + 0x174) = uVar8;
    *(undefined1 *)(param_2 + 0x178) = uVar1;
    *(undefined4 *)(param_2 + 0x170) = uVar9;
    if ((param_3 & 1) != 0) goto LAB_043edd70;
    iVar5 = *(int *)(param_1 + 0x234);
LAB_043edd84:
    uVar8 = *(undefined4 *)(param_1 + 0x238);
    *(int *)(param_2 + 0x1ac) = iVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar8;
    uVar10 = *(undefined8 *)(param_1 + 0x244);
    *(undefined8 *)(param_2 + 0x1bc) = *(undefined8 *)(param_1 + 0x24c);
    *(undefined8 *)(param_2 + 0x1b4) = uVar10;
    *(undefined8 *)(param_2 + 0x1c4) = *(undefined8 *)(param_1 + 0x23c);
    *(undefined8 *)(param_2 + 0x1d0) = *(undefined8 *)(param_1 + 600);
    thunk_FUN_03f5d7b8(param_2 + 0x1d0);
    *(undefined8 *)(param_2 + 0x1d8) = *(undefined8 *)(param_1 + 0x260);
    *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_1 + 0x268);
    *(undefined8 *)(param_2 + 0x1e8) = *(undefined8 *)(param_1 + 0x270);
    if ((param_3 & 1) == 0) {
      uVar6 = *(uint *)(param_1 + 0x280);
      goto LAB_043eddf4;
    }
  }
  else {
    if (param_1 == 0) goto LAB_043ede10;
    if (*(int *)(param_1 + 0x9c) != 0) {
      if (param_2 == 0) goto LAB_043ede10;
      uVar8 = *(undefined4 *)(param_1 + 0xa0);
      *(int *)(param_2 + 0x18) = *(int *)(param_1 + 0x9c);
      *(undefined4 *)(param_2 + 0x1c) = uVar8;
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      if (param_2 == 0) goto LAB_043ede10;
      goto LAB_043eda00;
    }
LAB_043eda24:
    if (*(int *)(param_1 + 0xc0) != 0) {
      if (param_2 == 0) goto LAB_043ede10;
      uVar10 = *(undefined8 *)(param_1 + 0xc4);
      *(int *)(param_2 + 0x3c) = *(int *)(param_1 + 0xc0);
      *(undefined8 *)(param_2 + 0x40) = uVar10;
    }
    iVar5 = *(int *)(param_1 + 0xd0);
    if (iVar5 != 0) {
      if (param_2 == 0) goto LAB_043ede10;
      goto LAB_043eda60;
    }
LAB_043edb54:
    iVar5 = *(int *)(param_1 + 0x140);
    if (iVar5 != 0) {
      if (param_2 == 0) goto LAB_043ede10;
      goto LAB_043edb68;
    }
LAB_043edb84:
    iVar5 = *(int *)(param_1 + 0x15c);
    if (iVar5 != 1) {
      if (param_2 == 0) goto LAB_043ede10;
      goto LAB_043edb9c;
    }
LAB_043edbd8:
    iVar5 = *(int *)(param_1 + 0x168);
    if (iVar5 != 0) {
      if (param_2 == 0) goto LAB_043ede10;
      goto LAB_043edbec;
    }
LAB_043edc30:
    iVar5 = *(int *)(param_1 + 0x204);
    if (iVar5 != 0) {
      if (param_2 == 0) goto LAB_043ede10;
      goto LAB_043edc44;
    }
LAB_043edc88:
    iVar5 = *(int *)(param_1 + 0x19c);
    if (iVar5 != 0) {
      if (param_2 == 0) goto LAB_043ede10;
      goto LAB_043edc9c;
    }
LAB_043edd70:
    iVar5 = *(int *)(param_1 + 0x234);
    if (iVar5 != 0) {
      if (param_2 == 0) goto LAB_043ede10;
      goto LAB_043edd84;
    }
  }
  if (*(uint *)(param_1 + 0x280) == 0) {
    return;
  }
  if (param_2 == 0) {
LAB_043ede10:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = *(uint *)(param_1 + 0x280) | *(uint *)(param_2 + 0x1f0);
LAB_043eddf4:
  *(uint *)(param_2 + 0x1f0) = uVar6;
  return;
}

