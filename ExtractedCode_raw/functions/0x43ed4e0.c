// rea decompile_all
// name: Coffee.UIEffects.UIEffect$$LoadPreset
// address: 0x43ed4e0
// body: available
// range: 0x43ed4e0-0x43ed937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ed934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffect__LoadPreset(long *param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((DAT_09517dcb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bee38);
    DAT_09517dcb = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((param_3 & 1) == 0) {
    if ((param_2 == 0) || (param_1 == (long *)0x0)) goto LAB_043ed934;
    uVar6 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x14) = uVar6;
LAB_043ed59c:
    *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)((long)param_1 + 0xb4) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)((long)param_1 + 0xac) = uVar8;
    uVar1 = *(undefined1 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x24);
    *(undefined1 *)((long)param_1 + 0xbc) = uVar1;
    if ((param_3 & 1) != 0) goto LAB_043ed5c0;
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    iVar4 = *(int *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined8 *)((long)param_1 + 0xc4) = uVar8;
LAB_043ed5fc:
    uVar6 = *(undefined4 *)(param_2 + 0x4c);
    *(int *)(param_1 + 0x1a) = iVar4;
    uVar1 = *(undefined1 *)(param_2 + 0x50);
    lVar3 = *(long *)(param_2 + 0x58);
    *(undefined4 *)((long)param_1 + 0xd4) = uVar6;
    *(undefined1 *)(param_1 + 0x1b) = uVar1;
    param_1[0x1c] = lVar3;
    thunk_FUN_03f5d7b8();
    param_1[0x1d] = *(long *)(param_2 + 0x60);
    param_1[0x1e] = *(long *)(param_2 + 0x68);
    param_1[0x1f] = *(long *)(param_2 + 0x70);
    uVar1 = *(undefined1 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x78);
    lVar3 = *(long *)(param_2 + 0x80);
    *(undefined1 *)((long)param_1 + 0x104) = uVar1;
    param_1[0x21] = lVar3;
    param_1[0x22] = *(long *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x90);
    uVar8 = *(undefined8 *)(param_2 + 0x94);
    *(undefined8 *)((long)param_1 + 0x124) = *(undefined8 *)(param_2 + 0x9c);
    *(undefined8 *)((long)param_1 + 0x11c) = uVar8;
    *(undefined2 *)((long)param_1 + 300) = *(undefined2 *)(param_2 + 0xa4);
    uVar8 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0xa8);
    Coffee_UIEffects_UIEffect__SetTransitionGradientKeys(param_1,uVar8);
    if ((param_3 & 1) != 0) goto LAB_043ed68c;
    iVar4 = *(int *)(param_2 + 0xb8);
LAB_043ed6a0:
    *(int *)(param_1 + 0x28) = iVar4;
    uVar8 = *(undefined8 *)(param_2 + 0xbc);
    *(undefined8 *)((long)param_1 + 0x14c) = *(undefined8 *)(param_2 + 0xc4);
    *(undefined8 *)((long)param_1 + 0x144) = uVar8;
    *(undefined8 *)((long)param_1 + 0x154) = *(undefined8 *)(param_2 + 0xcc);
    if ((param_3 & 1) != 0) goto LAB_043ed6bc;
    iVar4 = *(int *)(param_2 + 0xd4);
LAB_043ed6d4:
    *(int *)((long)param_1 + 0x15c) = iVar4;
    local_38 = 0;
    local_40 = 0;
    FUN_066e7490(&local_40,iVar4,*(undefined4 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xdc),
                 DAT_091bee38);
    lVar3 = Coffee_UIEffects_BlendTypeConverter__Convert(local_40,local_38);
    param_1[0x2c] = lVar3;
    if ((param_3 & 1) != 0) goto LAB_043ed70c;
    iVar4 = *(int *)(param_2 + 0xe0);
LAB_043ed720:
    *(int *)(param_1 + 0x2d) = iVar4;
    *(undefined8 *)((long)param_1 + 0x16c) = *(undefined8 *)(param_2 + 0xe4);
    uVar6 = *(undefined4 *)(param_2 + 0xec);
    param_1[0x2f] = *(long *)(param_2 + 0xf0);
    uVar7 = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)((long)param_1 + 0x174) = uVar6;
    uVar6 = *(undefined4 *)(param_2 + 0xfc);
    *(undefined4 *)(param_1 + 0x30) = uVar7;
    *(undefined4 *)((long)param_1 + 0x184) = uVar6;
    lVar3 = *(long *)(param_2 + 0x100);
    param_1[0x32] = *(long *)(param_2 + 0x108);
    param_1[0x31] = lVar3;
    *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x110);
    if ((param_3 & 1) != 0) goto LAB_043ed764;
    iVar4 = *(int *)(param_2 + 0x17c);
LAB_043ed778:
    uVar7 = *(undefined4 *)(param_2 + 0x19c);
    *(int *)((long)param_1 + 0x204) = iVar4;
    uVar6 = *(undefined4 *)(param_2 + 0x184);
    *(undefined4 *)((long)param_1 + 0x224) = uVar7;
    uVar7 = *(undefined4 *)(param_2 + 0x180);
    *(undefined4 *)((long)param_1 + 0x20c) = uVar6;
    *(undefined4 *)(param_1 + 0x41) = uVar7;
    lVar3 = *(long *)(param_2 + 0x188);
    param_1[0x43] = *(long *)(param_2 + 400);
    param_1[0x42] = lVar3;
    lVar3 = *(long *)(param_2 + 0x1a0);
    *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x198);
    uVar6 = *(undefined4 *)(param_2 + 0x1a8);
    param_1[0x45] = lVar3;
    *(undefined4 *)(param_1 + 0x46) = uVar6;
    if ((param_3 & 1) != 0) goto LAB_043ed7bc;
    iVar4 = *(int *)(param_2 + 0x114);
LAB_043ed7d0:
    uVar7 = *(undefined4 *)(param_2 + 0x118);
    *(int *)((long)param_1 + 0x19c) = iVar4;
    uVar6 = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(param_1 + 0x34) = uVar7;
    *(undefined4 *)((long)param_1 + 0x1a4) = uVar6;
    lVar3 = *(long *)(param_2 + 0x120);
    param_1[0x36] = *(long *)(param_2 + 0x128);
    param_1[0x35] = lVar3;
    lVar3 = *(long *)(param_2 + 0x130);
    param_1[0x38] = *(long *)(param_2 + 0x138);
    param_1[0x37] = lVar3;
    lVar3 = *(long *)(param_2 + 0x140);
    param_1[0x3a] = *(long *)(param_2 + 0x148);
    param_1[0x39] = lVar3;
    lVar3 = *(long *)(param_2 + 0x150);
    param_1[0x3c] = *(long *)(param_2 + 0x158);
    param_1[0x3b] = lVar3;
    Coffee_UIEffects_UIEffect__SetGradientKeys(param_1,*(undefined8 *)(param_2 + 0x160));
    uVar6 = *(undefined4 *)(param_2 + 0x174);
    uVar1 = *(undefined1 *)(param_2 + 0x178);
    param_1[0x3e] = *(long *)(param_2 + 0x168);
    uVar7 = *(undefined4 *)(param_2 + 0x170);
    *(undefined4 *)((long)param_1 + 0x1fc) = uVar6;
    *(undefined1 *)(param_1 + 0x40) = uVar1;
    *(undefined4 *)(param_1 + 0x3f) = uVar7;
    if ((param_3 & 1) != 0) goto LAB_043ed844;
    iVar4 = *(int *)(param_2 + 0x1ac);
LAB_043ed858:
    uVar6 = *(undefined4 *)(param_2 + 0x1b0);
    *(int *)((long)param_1 + 0x234) = iVar4;
    *(undefined4 *)(param_1 + 0x47) = uVar6;
    uVar8 = *(undefined8 *)(param_2 + 0x1b4);
    *(undefined8 *)((long)param_1 + 0x24c) = *(undefined8 *)(param_2 + 0x1bc);
    *(undefined8 *)((long)param_1 + 0x244) = uVar8;
    *(undefined8 *)((long)param_1 + 0x23c) = *(undefined8 *)(param_2 + 0x1c4);
    param_1[0x4b] = *(long *)(param_2 + 0x1d0);
    thunk_FUN_03f5d7b8(param_1 + 0x4b);
    param_1[0x4c] = *(long *)(param_2 + 0x1d8);
    param_1[0x4d] = *(long *)(param_2 + 0x1e0);
    param_1[0x4e] = *(long *)(param_2 + 0x1e8);
    if ((param_3 & 1) != 0) goto LAB_043ed8ac;
    uVar5 = *(uint *)(param_2 + 0x1f0);
  }
  else {
    if (param_2 == 0) goto LAB_043ed934;
    if (*(int *)(param_2 + 0x18) != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed934;
      uVar6 = *(undefined4 *)(param_2 + 0x1c);
      *(int *)((long)param_1 + 0x9c) = *(int *)(param_2 + 0x18);
      *(undefined4 *)(param_1 + 0x14) = uVar6;
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed934;
      goto LAB_043ed59c;
    }
LAB_043ed5c0:
    if (*(int *)(param_2 + 0x3c) != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed934;
      uVar8 = *(undefined8 *)(param_2 + 0x40);
      *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x3c);
      *(undefined8 *)((long)param_1 + 0xc4) = uVar8;
    }
    iVar4 = *(int *)(param_2 + 0x48);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed934;
      goto LAB_043ed5fc;
    }
LAB_043ed68c:
    iVar4 = *(int *)(param_2 + 0xb8);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed934;
      goto LAB_043ed6a0;
    }
LAB_043ed6bc:
    iVar4 = *(int *)(param_2 + 0xd4);
    if (iVar4 != 1) {
      if (param_1 == (long *)0x0) goto LAB_043ed934;
      goto LAB_043ed6d4;
    }
LAB_043ed70c:
    iVar4 = *(int *)(param_2 + 0xe0);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed934;
      goto LAB_043ed720;
    }
LAB_043ed764:
    iVar4 = *(int *)(param_2 + 0x17c);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed934;
      goto LAB_043ed778;
    }
LAB_043ed7bc:
    iVar4 = *(int *)(param_2 + 0x114);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed934;
      goto LAB_043ed7d0;
    }
LAB_043ed844:
    iVar4 = *(int *)(param_2 + 0x1ac);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed934;
      goto LAB_043ed858;
    }
LAB_043ed8ac:
    if (*(uint *)(param_2 + 0x1f0) == 0) goto LAB_043ed8cc;
    if (param_1 == (long *)0x0) {
LAB_043ed934:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = *(uint *)(param_2 + 0x1f0) | *(uint *)(param_1 + 0x50);
  }
  *(uint *)(param_1 + 0x50) = uVar5;
LAB_043ed8cc:
  uVar8 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
  (**(code **)(*param_1 + 0x348))(param_1,uVar8,*(undefined8 *)(*param_1 + 0x350));
  (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
  return;
}

