// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$WriteValueAsync
// address: 0x767d698
// body: available
// range: 0x767d698-0x767e63b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x767e160 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767e5bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767e5d0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767e5ec to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767e634 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767e638 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter__WriteValueAsync
               (long *param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  code *pcVar17;
  long *local_f0;
  ulong uStack_e8;
  ulong local_e0;
  long *local_d0;
  ulong uStack_c8;
  undefined4 local_c0;
  long *local_b0;
  ulong uStack_a8;
  ulong local_a0;
  long *local_90;
  undefined4 local_84;
  long *local_80;
  ulong uStack_78;
  ulong local_70;
  undefined8 local_60;
  ulong uStack_58;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_90 = param_3;
  local_84 = param_2;
  if ((DAT_095224ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09184f30);
    FUN_03f5c2a4(&DAT_091858c0);
    FUN_03f5c2a4(&DAT_09187490);
    FUN_03f5c2a4(&DAT_091b6fc8);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b75c8);
    FUN_03f5c2a4(&DAT_091b75a8);
    FUN_03f5c2a4(&DAT_091b69f8);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b74f8);
    FUN_03f5c2a4(&DAT_091b6f78);
    FUN_03f5c2a4(&DAT_091b7380);
    FUN_03f5c2a4(&DAT_091b6af0);
    FUN_03f5c2a4(&DAT_091b6c38);
    FUN_03f5c2a4(&DAT_091b6cb8);
    FUN_03f5c2a4(&DAT_091b6e80);
    FUN_03f5c2a4(&DAT_091b6c60);
    FUN_03f5c2a4(&DAT_091b6d48);
    FUN_03f5c2a4(&DAT_091b75e8);
    FUN_03f5c2a4(&DAT_091b6aa8);
    FUN_03f5c2a4(&DAT_091b73f0);
    FUN_03f5c2a4(&DAT_0917dc18);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918c918);
    DAT_095224ff = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = (long *)0x0;
LAB_0767d870:
  plVar15 = local_90;
  uVar12 = DAT_0917fc88;
  uVar14 = local_60._4_4_;
  plVar11 = local_90;
  switch(param_2) {
  case 2:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) {
LAB_0767e5ac:
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    else if (*(long *)(*local_90 + 0x40) == *(long *)(DAT_09535460 + 0x40)) {
      puVar6 = (ushort *)thunk_FUN_03f99594();
      uVar14 = (uint)*puVar6;
      pcVar17 = *(code **)(*param_1 + 0x318);
      uVar12 = *(undefined8 *)(*param_1 + 800);
LAB_0767df48:
      (*pcVar17)(param_1,uVar14,param_4,uVar12);
LAB_0767e584:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
LAB_0767e5c0:
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
    }
LAB_0767e638:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  case 3:
    if (local_90 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_60 = (long *)((ulong)uVar14 << 0x20);
      puVar9 = (undefined2 *)FUN_039aef84(local_90,DAT_09535460);
      FUN_05c2a664(&local_60,*puVar9,DAT_091b6af0);
      plVar11 = (long *)((ulong)local_60 & 0xffffffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 0x328);
    uVar12 = *(undefined8 *)(*param_1 + 0x330);
    break;
  case 4:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_09535400 + 0x40)) goto LAB_0767e5c0;
    pbVar8 = (byte *)thunk_FUN_03f99594();
    uVar14 = (uint)*pbVar8;
    pcVar17 = *(code **)(*param_1 + 0x2c8);
    uVar12 = *(undefined8 *)(*param_1 + 0x2d0);
    goto LAB_0767df48;
  case 5:
    if (local_90 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_60 = (long *)((ulong)local_60._2_6_ << 0x10);
      puVar5 = (undefined1 *)FUN_039aef84(local_90,DAT_09535400);
      FUN_05c290f8(&local_60,*puVar5,DAT_091b6a48);
      plVar11 = (long *)((ulong)local_60 & 0xffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 0x2d8);
    uVar12 = *(undefined8 *)(*param_1 + 0x2e0);
    break;
  case 6:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_09535408 + 0x40)) goto LAB_0767e5c0;
    pbVar8 = (byte *)thunk_FUN_03f99594();
    uVar14 = (uint)*pbVar8;
    pcVar17 = *(code **)(*param_1 + 0x448);
    uVar12 = *(undefined8 *)(*param_1 + 0x450);
    goto LAB_0767df48;
  case 7:
    if (local_90 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_60 = (long *)((ulong)local_60._2_6_ << 0x10);
      puVar5 = (undefined1 *)FUN_039aef84(local_90,DAT_09535408);
      FUN_05c36094(&local_60,*puVar5,DAT_091b7380);
      plVar11 = (long *)((ulong)local_60 & 0xffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 0x458);
    uVar12 = *(undefined8 *)(*param_1 + 0x460);
    break;
  case 8:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_09535410 + 0x40)) goto LAB_0767e5c0;
    puVar6 = (ushort *)thunk_FUN_03f99594();
    uVar14 = (uint)*puVar6;
    pcVar17 = *(code **)(*param_1 + 0x468);
    uVar12 = *(undefined8 *)(*param_1 + 0x470);
    goto LAB_0767df48;
  case 9:
    if (local_90 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_60 = (long *)((ulong)uVar14 << 0x20);
      puVar9 = (undefined2 *)FUN_039aef84(local_90,DAT_09535410);
      FUN_05c30400(&local_60,*puVar9,DAT_091b6f78);
      plVar11 = (long *)((ulong)local_60 & 0xffffffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 0x478);
    uVar12 = *(undefined8 *)(*param_1 + 0x480);
    break;
  case 10:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_09535418 + 0x40)) goto LAB_0767e5c0;
    puVar6 = (ushort *)thunk_FUN_03f99594();
    uVar14 = (uint)*puVar6;
    pcVar17 = *(code **)(*param_1 + 0x508);
    uVar12 = *(undefined8 *)(*param_1 + 0x510);
    goto LAB_0767df48;
  case 0xb:
    if (local_90 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_60 = (long *)((ulong)uVar14 << 0x20);
      puVar9 = (undefined2 *)FUN_039aef84(local_90,DAT_09535418);
      FUN_05c38f90(&local_60,*puVar9,DAT_091b75a8);
      plVar11 = (long *)((ulong)local_60 & 0xffffffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 0x518);
    uVar12 = *(undefined8 *)(*param_1 + 0x520);
    break;
  case 0xc:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_09535420 + 0x40)) goto LAB_0767e5c0;
    puVar7 = (uint *)thunk_FUN_03f99594();
    uVar14 = *puVar7;
    pcVar17 = *(code **)(*param_1 + 0x3f8);
    uVar12 = *(undefined8 *)(*param_1 + 0x400);
    goto LAB_0767df48;
  case 0xd:
    if (local_90 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_60 = (long *)0x0;
      puVar10 = (undefined4 *)FUN_039aef84(local_90,DAT_09535420);
      FUN_05c3078c(&local_60,*puVar10,DAT_091b6f98);
      plVar11 = local_60;
    }
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 0x408);
    uVar12 = *(undefined8 *)(*param_1 + 0x410);
    break;
  case 0xe:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_095353f0 + 0x40)) goto LAB_0767e5c0;
    pbVar8 = (byte *)thunk_FUN_03f99594();
    uVar14 = (uint)*pbVar8;
    pcVar17 = *(code **)(*param_1 + 0x2e8);
    uVar12 = *(undefined8 *)(*param_1 + 0x2f0);
    goto LAB_0767df48;
  case 0xf:
    if (local_90 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_60 = (long *)((ulong)local_60._2_6_ << 0x10);
      puVar5 = (undefined1 *)FUN_039aef84(local_90,DAT_095353f0);
      FUN_05c29a54(&local_60,*puVar5,DAT_091b6aa8);
      plVar11 = (long *)((ulong)local_60 & 0xffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 0x2f8);
    uVar12 = *(undefined8 *)(*param_1 + 0x300);
    break;
  case 0x10:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_09535428 + 0x40)) goto LAB_0767e5c0;
    puVar7 = (uint *)thunk_FUN_03f99594();
    uVar14 = *puVar7;
    pcVar17 = *(code **)(*param_1 + 0x4b8);
    uVar12 = *(undefined8 *)(*param_1 + 0x4c0);
    goto LAB_0767df48;
  case 0x11:
    if (local_90 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_60 = (long *)0x0;
      puVar10 = (undefined4 *)FUN_039aef84(local_90,DAT_09535428);
      FUN_05c3931c(&local_60,*puVar10,DAT_091b75c8);
      plVar11 = local_60;
    }
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 0x4c8);
    uVar12 = *(undefined8 *)(*param_1 + 0x4d0);
    break;
  case 0x12:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_09535440 + 0x40)) goto LAB_0767e5c0;
    puVar3 = (ulong *)thunk_FUN_03f99594();
    plVar11 = (long *)*puVar3;
    pcVar17 = *(code **)(*param_1 + 0x418);
    uVar12 = *(undefined8 *)(*param_1 + 0x420);
    break;
  case 0x13:
    if (local_90 == (long *)0x0) {
      uVar16 = 0;
      plVar15 = (long *)0x0;
    }
    else {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_90,DAT_09535440);
      FUN_05c30ed0(&local_60,*puVar4,DAT_091b6fc8);
      plVar15 = local_60;
      uVar16 = uStack_58;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x428);
      uVar12 = *(undefined8 *)(*param_1 + 0x430);
      goto LAB_0767e558;
    }
    goto LAB_0767e5ac;
  case 0x14:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_09535448 + 0x40)) goto LAB_0767e5c0;
    puVar3 = (ulong *)thunk_FUN_03f99594();
    plVar11 = (long *)*puVar3;
    pcVar17 = *(code **)(*param_1 + 0x4d8);
    uVar12 = *(undefined8 *)(*param_1 + 0x4e0);
    break;
  case 0x15:
    if (local_90 == (long *)0x0) {
      uVar16 = 0;
      plVar15 = (long *)0x0;
    }
    else {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_90,DAT_09535448);
      FUN_05c396a8(&local_60,*puVar4,DAT_091b75e8);
      plVar15 = local_60;
      uVar16 = uStack_58;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x4e8);
      uVar12 = *(undefined8 *)(*param_1 + 0x4f0);
      goto LAB_0767e558;
    }
    goto LAB_0767e5ac;
  case 0x16:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_09535450 + 0x40)) goto LAB_0767e5c0;
    puVar10 = (undefined4 *)thunk_FUN_03f99594();
    (**(code **)(*param_1 + 0x3b8))(*puVar10,param_1,param_4,*(undefined8 *)(*param_1 + 0x3c0));
    goto LAB_0767e584;
  case 0x17:
    if (local_90 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_60 = (long *)0x0;
      puVar10 = (undefined4 *)FUN_039aef84(local_90,DAT_09535450);
      FUN_05c37590(*puVar10,&local_60,DAT_091b73f0);
      plVar11 = local_60;
    }
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 0x3c8);
    uVar12 = *(undefined8 *)(*param_1 + 0x3d0);
    break;
  case 0x18:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_09535458 + 0x40)) goto LAB_0767e5c0;
    puVar4 = (undefined8 *)thunk_FUN_03f99594();
    (**(code **)(*param_1 + 0x398))(*puVar4,param_1,param_4,*(undefined8 *)(*param_1 + 0x3a0));
    goto LAB_0767e584;
  case 0x19:
    if (local_90 == (long *)0x0) {
      uVar16 = 0;
      plVar15 = (long *)0x0;
    }
    else {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_90,DAT_09535458);
      FUN_05c2dd28(*puVar4,&local_60,DAT_091b6d48);
      plVar15 = local_60;
      uVar16 = uStack_58;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x3a8);
      uVar12 = *(undefined8 *)(*param_1 + 0x3b0);
      goto LAB_0767e558;
    }
    goto LAB_0767e5ac;
  case 0x1a:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_09183548 + 0x40)) goto LAB_0767e5c0;
    puVar3 = (ulong *)thunk_FUN_03f99594();
    plVar11 = (long *)*puVar3;
    pcVar17 = *(code **)(*param_1 + 0x338);
    uVar12 = *(undefined8 *)(*param_1 + 0x340);
    break;
  case 0x1b:
    if (local_90 == (long *)0x0) {
      uVar16 = 0;
      plVar15 = (long *)0x0;
    }
    else {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_90,DAT_09183548);
      FUN_05c2c6a4(&local_60,*puVar4,DAT_091b6c38);
      plVar15 = local_60;
      uVar16 = uStack_58;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x348);
      uVar12 = *(undefined8 *)(*param_1 + 0x350);
      goto LAB_0767e558;
    }
    goto LAB_0767e5ac;
  case 0x1c:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) == *(long *)(DAT_09183590 + 0x40)) {
      puVar3 = (ulong *)thunk_FUN_03f99594();
      plVar15 = (long *)*puVar3;
      uVar16 = puVar3[1];
      pcVar17 = *(code **)(*param_1 + 0x358);
      uVar12 = *(undefined8 *)(*param_1 + 0x360);
      goto LAB_0767e558;
    }
    goto LAB_0767e5c0;
  case 0x1d:
    if (local_90 == (long *)0x0) {
      local_b0 = (long *)0x0;
      uStack_a8 = 0;
      local_a0 = 0;
    }
    else {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      local_50 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_90,DAT_09183590);
      FUN_05c2caec(&local_60,*puVar4,puVar4[1],DAT_091b6c60);
      uStack_a8 = uStack_58;
      local_b0 = local_60;
      local_a0 = local_50;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x368);
      uStack_58 = uStack_a8;
      local_60 = local_b0;
      local_50 = local_a0;
      uVar12 = *(undefined8 *)(*param_1 + 0x370);
      goto LAB_0767e52c;
    }
    goto LAB_0767e5ac;
  case 0x1e:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) == *(long *)(DAT_091837d8 + 0x40)) {
      puVar3 = (ulong *)thunk_FUN_03f99594();
      plVar15 = (long *)*puVar3;
      uVar16 = puVar3[1];
      pcVar17 = *(code **)(*param_1 + 0x378);
      uVar12 = *(undefined8 *)(*param_1 + 0x380);
      goto LAB_0767e558;
    }
    goto LAB_0767e5c0;
  case 0x1f:
    if (local_90 == (long *)0x0) {
      local_80 = (long *)0x0;
      uStack_78 = 0;
      local_70 = 0;
    }
    else {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      local_50 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_90,DAT_091837d8);
      FUN_05c2d414(&local_60,*puVar4,puVar4[1],DAT_091b6cb8);
      uStack_78 = uStack_58;
      local_80 = local_60;
      local_70 = local_50;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x388);
      uStack_58 = uStack_78;
      local_60 = local_80;
      local_50 = local_70;
      uVar12 = *(undefined8 *)(*param_1 + 0x390);
      goto LAB_0767e52c;
    }
    goto LAB_0767e5ac;
  case 0x20:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) == *(long *)(DAT_09184f30 + 0x40)) {
      puVar3 = (ulong *)thunk_FUN_03f99594();
      plVar15 = (long *)*puVar3;
      uVar16 = puVar3[1];
      pcVar17 = *(code **)(*param_1 + 0x3d8);
      uVar12 = *(undefined8 *)(*param_1 + 0x3e0);
      goto LAB_0767e558;
    }
    goto LAB_0767e5c0;
  case 0x21:
    if (local_90 == (long *)0x0) {
      local_d0 = (long *)0x0;
      uStack_c8 = 0;
      local_c0 = 0;
    }
    else {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      local_50 = local_50 & 0xffffffff00000000;
      puVar4 = (undefined8 *)FUN_039aef84(local_90,DAT_09184f30);
      FUN_05c2ea08(&local_60,*puVar4,puVar4[1],DAT_091b6e80);
      uStack_c8 = uStack_58;
      local_d0 = local_60;
      local_c0 = (undefined4)local_50;
    }
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 1000);
    uStack_58 = uStack_c8;
    local_60 = local_d0;
    local_50 = CONCAT44(local_50._4_4_,local_c0);
    uVar12 = *(undefined8 *)(*param_1 + 0x3f0);
LAB_0767e52c:
    (*pcVar17)(param_1,&local_60,param_4,uVar12);
    goto LAB_0767e584;
  case 0x22:
    if ((param_1 == (long *)0x0) || (local_90 == (long *)0x0)) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) != *(long *)(DAT_0918bd60 + 0x40)) goto LAB_0767e5c0;
    puVar3 = (ulong *)thunk_FUN_03f99594();
    plVar11 = (long *)*puVar3;
    pcVar17 = *(code **)(*param_1 + 0x498);
    uVar12 = *(undefined8 *)(*param_1 + 0x4a0);
    break;
  case 0x23:
    if (local_90 == (long *)0x0) {
      uVar16 = 0;
      plVar15 = (long *)0x0;
    }
    else {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_90,DAT_0918bd60);
      FUN_05c381f8(&local_60,*puVar4,DAT_091b74f8);
      plVar15 = local_60;
      uVar16 = uStack_58;
    }
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 0x4a8);
    uVar12 = *(undefined8 *)(*param_1 + 0x4b0);
LAB_0767e558:
    (*pcVar17)(param_1,plVar15,uVar16,param_4,uVar12);
    goto LAB_0767e584;
  case 0x24:
    if (local_90 == (long *)0x0) goto LAB_0767e5ac;
    if (*(long *)(*local_90 + 0x40) == *(long *)(DAT_09181b78 + 0x40)) {
      puVar3 = (ulong *)thunk_FUN_03f99594();
      uStack_58 = puVar3[1];
      local_60 = (long *)*puVar3;
      lVar2 = DAT_09181b78;
      goto LAB_0767e344;
    }
    goto LAB_0767e5c0;
  case 0x25:
    if (local_90 == (long *)0x0) {
      local_f0 = (long *)0x0;
      uStack_e8 = 0;
      local_e0 = 0;
    }
    else {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      local_50 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_90,DAT_09181b78);
      FUN_05c28218(&local_60,*puVar4,puVar4[1],DAT_091b69f8);
      uStack_e8 = uStack_58;
      local_f0 = local_60;
      local_e0 = local_50;
    }
    uStack_58 = uStack_e8;
    local_60 = local_f0;
    local_50 = local_e0;
    lVar2 = DAT_0917dc18;
LAB_0767e344:
    plVar11 = (long *)FUN_03f5c42c(lVar2,&local_60);
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    pcVar17 = *(code **)(*param_1 + 0x438);
    uVar12 = *(undefined8 *)(*param_1 + 0x440);
    break;
  case 0x26:
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    if (local_90 != (long *)0x0) {
      lVar2 = DAT_0918c918;
      if ((*(byte *)(*local_90 + 0x130) < *(byte *)(DAT_0918c918 + 0x130)) ||
         (*(long *)(*(long *)(*local_90 + 200) + (ulong)*(byte *)(DAT_0918c918 + 0x130) * 8 + -8) !=
          DAT_0918c918)) goto LAB_0767e5d4;
    }
    pcVar17 = *(code **)(*param_1 + 0x4f8);
    uVar12 = *(undefined8 *)(*param_1 + 0x500);
    break;
  case 0x27:
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    if ((local_90 != (long *)0x0) && (lVar2 = DAT_09535468, *local_90 != DAT_09535468)) {
LAB_0767e5d4:
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(local_90,lVar2);
      }
      goto LAB_0767e638;
    }
    pcVar17 = *(code **)(*param_1 + 0x488);
    uVar12 = *(undefined8 *)(*param_1 + 0x490);
    break;
  case 0x28:
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    if (local_90 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)thunk_FUN_03f99350(local_90,DAT_0917fc88);
      if (plVar11 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar15,uVar12);
        }
        goto LAB_0767e638;
      }
    }
    pcVar17 = *(code **)(*param_1 + 0x308);
    uVar12 = *(undefined8 *)(*param_1 + 0x310);
    break;
  case 0x29:
switchD_0767d8cc_caseD_29:
    if (param_1 == (long *)0x0) goto LAB_0767e5ac;
    (**(code **)(*param_1 + 0x238))(param_1,param_4,*(undefined8 *)(*param_1 + 0x240));
    goto LAB_0767e584;
  default:
    lVar2 = thunk_FUN_03f99350(local_90,DAT_091858c0);
    plVar15 = local_90;
    if (lVar2 != 0) goto code_r0x0767d88c;
    if (local_90 == (long *)0x0) goto switchD_0767d8cc_caseD_29;
    thunk_FUN_03fc39d4(&DAT_09187490);
    FUN_039afb80();
    uVar12 = Newtonsoft_Json_JsonWriter__CreateUnsupportedTypeException(param_1,plVar15);
    uVar13 = thunk_FUN_03fc39d4(&DAT_091d1fe0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar12,uVar13);
    }
    goto LAB_0767e638;
  }
  (*pcVar17)(param_1,plVar11,param_4,uVar12);
  goto LAB_0767e584;
code_r0x0767d88c:
  if (*(int *)(DAT_09187490 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Newtonsoft_Json_JsonWriter__ResolveConvertibleValue(lVar2,&local_84,&local_90);
  param_2 = local_84;
  goto LAB_0767d870;
}

