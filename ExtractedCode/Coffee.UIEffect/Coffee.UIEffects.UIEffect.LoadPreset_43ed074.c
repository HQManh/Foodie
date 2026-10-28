// rea decompile_all
// name: Coffee.UIEffects.UIEffect$$LoadPreset
// address: 0x43ed074
// body: available
// range: 0x43ed074-0x43ed4df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ed4dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((DAT_09517dca & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bee38);
    DAT_09517dca = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((param_3 & 1) == 0) {
    if ((param_2 == 0) || (param_1 == (long *)0x0)) goto LAB_043ed4dc;
    uVar6 = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x14) = uVar6;
LAB_043ed134:
    *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    uVar9 = *(undefined8 *)(param_2 + 0xac);
    *(undefined8 *)((long)param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
    *(undefined8 *)((long)param_1 + 0xac) = uVar9;
    uVar1 = *(undefined1 *)(param_2 + 0xbc);
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined1 *)((long)param_1 + 0xbc) = uVar1;
    if ((param_3 & 1) != 0) goto LAB_043ed158;
    uVar9 = *(undefined8 *)(param_2 + 0xc4);
    iVar4 = *(int *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined8 *)((long)param_1 + 0xc4) = uVar9;
LAB_043ed194:
    uVar6 = *(undefined4 *)(param_2 + 0xd4);
    *(int *)(param_1 + 0x1a) = iVar4;
    uVar1 = *(undefined1 *)(param_2 + 0xd8);
    lVar3 = *(long *)(param_2 + 0xe0);
    *(undefined4 *)((long)param_1 + 0xd4) = uVar6;
    *(undefined1 *)(param_1 + 0x1b) = uVar1;
    param_1[0x1c] = lVar3;
    thunk_FUN_03f5d7b8();
    param_1[0x1d] = *(long *)(param_2 + 0xe8);
    param_1[0x1e] = *(long *)(param_2 + 0xf0);
    param_1[0x1f] = *(long *)(param_2 + 0xf8);
    uVar1 = *(undefined1 *)(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x100);
    lVar3 = *(long *)(param_2 + 0x108);
    *(undefined1 *)((long)param_1 + 0x104) = uVar1;
    param_1[0x21] = lVar3;
    param_1[0x22] = *(long *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x118);
    uVar9 = *(undefined8 *)(param_2 + 0x11c);
    *(undefined8 *)((long)param_1 + 0x124) = *(undefined8 *)(param_2 + 0x124);
    *(undefined8 *)((long)param_1 + 0x11c) = uVar9;
    *(undefined2 *)((long)param_1 + 300) = *(undefined2 *)(param_2 + 300);
    uVar9 = *(undefined8 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x130);
    Coffee_UIEffects_UIEffect__SetTransitionGradientKeys(param_1,uVar9);
    if ((param_3 & 1) != 0) goto LAB_043ed228;
    iVar4 = *(int *)(param_2 + 0x140);
LAB_043ed23c:
    *(int *)(param_1 + 0x28) = iVar4;
    uVar9 = *(undefined8 *)(param_2 + 0x144);
    *(undefined8 *)((long)param_1 + 0x14c) = *(undefined8 *)(param_2 + 0x14c);
    *(undefined8 *)((long)param_1 + 0x144) = uVar9;
    uVar6 = *(undefined4 *)(param_2 + 0x158);
    *(undefined4 *)((long)param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
    *(undefined4 *)(param_1 + 0x2b) = uVar6;
    if ((param_3 & 1) != 0) goto LAB_043ed264;
    iVar4 = *(int *)(param_2 + 0x15c);
LAB_043ed27c:
    uVar6 = *(undefined4 *)(param_2 + 0x160);
    uVar8 = *(undefined4 *)(param_2 + 0x164);
    *(int *)((long)param_1 + 0x15c) = iVar4;
    local_38 = 0;
    local_40 = 0;
    FUN_066e7490(&local_40,iVar4,uVar6,uVar8,DAT_091bee38);
    lVar3 = Coffee_UIEffects_BlendTypeConverter__Convert(local_40,local_38);
    param_1[0x2c] = lVar3;
    if ((param_3 & 1) != 0) goto LAB_043ed2b8;
    iVar4 = *(int *)(param_2 + 0x168);
LAB_043ed2cc:
    *(int *)(param_1 + 0x2d) = iVar4;
    *(undefined8 *)((long)param_1 + 0x16c) = *(undefined8 *)(param_2 + 0x16c);
    uVar6 = *(undefined4 *)(param_2 + 0x174);
    uVar8 = *(undefined4 *)(param_2 + 0x184);
    param_1[0x2f] = *(long *)(param_2 + 0x178);
    uVar7 = *(undefined4 *)(param_2 + 0x180);
    *(undefined4 *)((long)param_1 + 0x174) = uVar6;
    *(undefined4 *)((long)param_1 + 0x184) = uVar8;
    *(undefined4 *)(param_1 + 0x30) = uVar7;
    lVar3 = *(long *)(param_2 + 0x188);
    param_1[0x32] = *(long *)(param_2 + 400);
    param_1[0x31] = lVar3;
    *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x198);
    if ((param_3 & 1) != 0) goto LAB_043ed314;
    iVar4 = *(int *)(param_2 + 0x204);
LAB_043ed328:
    uVar8 = *(undefined4 *)(param_2 + 0x224);
    *(int *)((long)param_1 + 0x204) = iVar4;
    uVar7 = *(undefined4 *)(param_2 + 0x208);
    uVar6 = *(undefined4 *)(param_2 + 0x20c);
    *(undefined4 *)((long)param_1 + 0x224) = uVar8;
    *(undefined4 *)(param_1 + 0x41) = uVar7;
    *(undefined4 *)((long)param_1 + 0x20c) = uVar6;
    lVar3 = *(long *)(param_2 + 0x210);
    param_1[0x43] = *(long *)(param_2 + 0x218);
    param_1[0x42] = lVar3;
    lVar3 = *(long *)(param_2 + 0x228);
    uVar6 = *(undefined4 *)(param_2 + 0x230);
    *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x220);
    param_1[0x45] = lVar3;
    *(undefined4 *)(param_1 + 0x46) = uVar6;
    if ((param_3 & 1) != 0) goto LAB_043ed368;
    iVar4 = *(int *)(param_2 + 0x19c);
LAB_043ed37c:
    uVar8 = *(undefined4 *)(param_2 + 0x1a0);
    *(int *)((long)param_1 + 0x19c) = iVar4;
    uVar6 = *(undefined4 *)(param_2 + 0x1a4);
    *(undefined4 *)(param_1 + 0x34) = uVar8;
    *(undefined4 *)((long)param_1 + 0x1a4) = uVar6;
    lVar3 = *(long *)(param_2 + 0x1a8);
    param_1[0x36] = *(long *)(param_2 + 0x1b0);
    param_1[0x35] = lVar3;
    lVar3 = *(long *)(param_2 + 0x1b8);
    param_1[0x38] = *(long *)(param_2 + 0x1c0);
    param_1[0x37] = lVar3;
    lVar3 = *(long *)(param_2 + 0x1c8);
    param_1[0x3a] = *(long *)(param_2 + 0x1d0);
    param_1[0x39] = lVar3;
    lVar3 = *(long *)(param_2 + 0x1d8);
    param_1[0x3c] = *(long *)(param_2 + 0x1e0);
    param_1[0x3b] = lVar3;
    Coffee_UIEffects_UIEffect__SetGradientKeys(param_1,*(undefined8 *)(param_2 + 0x1e8));
    uVar6 = *(undefined4 *)(param_2 + 0x1fc);
    uVar1 = *(undefined1 *)(param_2 + 0x200);
    param_1[0x3e] = *(long *)(param_2 + 0x1f0);
    uVar8 = *(undefined4 *)(param_2 + 0x1f8);
    *(undefined4 *)((long)param_1 + 0x1fc) = uVar6;
    *(undefined1 *)(param_1 + 0x40) = uVar1;
    *(undefined4 *)(param_1 + 0x3f) = uVar8;
    if ((param_3 & 1) != 0) goto LAB_043ed400;
    iVar4 = *(int *)(param_2 + 0x234);
LAB_043ed414:
    uVar6 = *(undefined4 *)(param_2 + 0x238);
    *(int *)((long)param_1 + 0x234) = iVar4;
    *(undefined4 *)(param_1 + 0x47) = uVar6;
    *(undefined8 *)((long)param_1 + 0x23c) = *(undefined8 *)(param_2 + 0x23c);
    param_1[0x4b] = *(long *)(param_2 + 600);
    thunk_FUN_03f5d7b8(param_1 + 0x4b);
    param_1[0x4c] = *(long *)(param_2 + 0x260);
    param_1[0x4d] = *(long *)(param_2 + 0x268);
    param_1[0x4e] = *(long *)(param_2 + 0x270);
    if ((param_3 & 1) != 0) goto LAB_043ed454;
    uVar5 = *(uint *)(param_2 + 0x280);
  }
  else {
    if (param_2 == 0) goto LAB_043ed4dc;
    if (*(int *)(param_2 + 0x9c) != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed4dc;
      uVar6 = *(undefined4 *)(param_2 + 0xa0);
      *(int *)((long)param_1 + 0x9c) = *(int *)(param_2 + 0x9c);
      *(undefined4 *)(param_1 + 0x14) = uVar6;
    }
    if (*(int *)(param_2 + 0xa4) != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed4dc;
      goto LAB_043ed134;
    }
LAB_043ed158:
    if (*(int *)(param_2 + 0xc0) != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed4dc;
      uVar9 = *(undefined8 *)(param_2 + 0xc4);
      *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0xc0);
      *(undefined8 *)((long)param_1 + 0xc4) = uVar9;
    }
    iVar4 = *(int *)(param_2 + 0xd0);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed4dc;
      goto LAB_043ed194;
    }
LAB_043ed228:
    iVar4 = *(int *)(param_2 + 0x140);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed4dc;
      goto LAB_043ed23c;
    }
LAB_043ed264:
    iVar4 = *(int *)(param_2 + 0x15c);
    if (iVar4 != 1) {
      if (param_1 == (long *)0x0) goto LAB_043ed4dc;
      goto LAB_043ed27c;
    }
LAB_043ed2b8:
    iVar4 = *(int *)(param_2 + 0x168);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed4dc;
      goto LAB_043ed2cc;
    }
LAB_043ed314:
    iVar4 = *(int *)(param_2 + 0x204);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed4dc;
      goto LAB_043ed328;
    }
LAB_043ed368:
    iVar4 = *(int *)(param_2 + 0x19c);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed4dc;
      goto LAB_043ed37c;
    }
LAB_043ed400:
    iVar4 = *(int *)(param_2 + 0x234);
    if (iVar4 != 0) {
      if (param_1 == (long *)0x0) goto LAB_043ed4dc;
      goto LAB_043ed414;
    }
LAB_043ed454:
    if (*(uint *)(param_2 + 0x280) == 0) goto LAB_043ed474;
    if (param_1 == (long *)0x0) {
LAB_043ed4dc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = *(uint *)(param_2 + 0x280) | *(uint *)(param_1 + 0x50);
  }
  *(uint *)(param_1 + 0x50) = uVar5;
LAB_043ed474:
  uVar9 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
  (**(code **)(*param_1 + 0x348))(param_1,uVar9,*(undefined8 *)(*param_1 + 0x350));
  (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
  return;
}

