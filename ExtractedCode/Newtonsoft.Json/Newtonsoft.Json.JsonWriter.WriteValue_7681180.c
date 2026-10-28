// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$WriteValue
// address: 0x7681180
// body: available
// range: 0x7681180-0x76820fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7681c38 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768207c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7682090 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76820ac to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76820f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76820f8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter__WriteValue(long *param_1,undefined4 param_2,long *param_3)

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
  long *local_e0;
  ulong uStack_d8;
  ulong local_d0;
  long *local_c0;
  ulong uStack_b8;
  undefined4 local_b0;
  long *local_a0;
  ulong uStack_98;
  ulong local_90;
  long *local_80;
  undefined4 local_74;
  long *local_70;
  ulong uStack_68;
  ulong local_60;
  undefined8 local_50;
  ulong uStack_48;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = param_3;
  local_74 = param_2;
  if ((DAT_09522522 & 1) == 0) {
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
    DAT_09522522 = 1;
  }
  uStack_68 = 0;
  local_60 = 0;
  local_70 = (long *)0x0;
LAB_07681350:
  plVar15 = local_80;
  uVar12 = DAT_0917fc88;
  uVar14 = local_50._4_4_;
  plVar11 = local_80;
  switch(param_2) {
  case 2:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) {
LAB_0768206c:
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    else if (*(long *)(*local_80 + 0x40) == *(long *)(DAT_09535460 + 0x40)) {
      puVar6 = (ushort *)thunk_FUN_03f99594();
      uVar14 = (uint)*puVar6;
      pcVar17 = *(code **)(*param_1 + 0x738);
      uVar12 = *(undefined8 *)(*param_1 + 0x740);
LAB_07681a24:
      (*pcVar17)(param_1,uVar14,uVar12);
LAB_07682048:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
    else {
LAB_07682080:
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
    }
LAB_076820f8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  case 3:
    if (local_80 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_50 = (long *)((ulong)uVar14 << 0x20);
      puVar9 = (undefined2 *)FUN_039aef84(local_80,DAT_09535460);
      FUN_05c2a664(&local_50,*puVar9,DAT_091b6af0);
      plVar11 = (long *)((ulong)local_50 & 0xffffffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x848);
    uVar12 = *(undefined8 *)(*param_1 + 0x850);
    break;
  case 4:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_09535400 + 0x40)) goto LAB_07682080;
    pbVar8 = (byte *)thunk_FUN_03f99594();
    uVar14 = (uint)*pbVar8;
    pcVar17 = *(code **)(*param_1 + 0x708);
    uVar12 = *(undefined8 *)(*param_1 + 0x710);
    goto LAB_07681a24;
  case 5:
    if (local_80 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_50 = (long *)((ulong)local_50._2_6_ << 0x10);
      puVar5 = (undefined1 *)FUN_039aef84(local_80,DAT_09535400);
      FUN_05c290f8(&local_50,*puVar5,DAT_091b6a48);
      plVar11 = (long *)((ulong)local_50 & 0xffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x818);
    uVar12 = *(undefined8 *)(*param_1 + 0x820);
    break;
  case 6:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_09535408 + 0x40)) goto LAB_07682080;
    pbVar8 = (byte *)thunk_FUN_03f99594();
    uVar14 = (uint)*pbVar8;
    pcVar17 = *(code **)(*param_1 + 0x758);
    uVar12 = *(undefined8 *)(*param_1 + 0x760);
    goto LAB_07681a24;
  case 7:
    if (local_80 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_50 = (long *)((ulong)local_50._2_6_ << 0x10);
      puVar5 = (undefined1 *)FUN_039aef84(local_80,DAT_09535408);
      FUN_05c36094(&local_50,*puVar5,DAT_091b7380);
      plVar11 = (long *)((ulong)local_50 & 0xffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x868);
    uVar12 = *(undefined8 *)(*param_1 + 0x870);
    break;
  case 8:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_09535410 + 0x40)) goto LAB_07682080;
    puVar6 = (ushort *)thunk_FUN_03f99594();
    uVar14 = (uint)*puVar6;
    pcVar17 = *(code **)(*param_1 + 0x718);
    uVar12 = *(undefined8 *)(*param_1 + 0x720);
    goto LAB_07681a24;
  case 9:
    if (local_80 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_50 = (long *)((ulong)uVar14 << 0x20);
      puVar9 = (undefined2 *)FUN_039aef84(local_80,DAT_09535410);
      FUN_05c30400(&local_50,*puVar9,DAT_091b6f78);
      plVar11 = (long *)((ulong)local_50 & 0xffffffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x828);
    uVar12 = *(undefined8 *)(*param_1 + 0x830);
    break;
  case 10:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_09535418 + 0x40)) goto LAB_07682080;
    puVar6 = (ushort *)thunk_FUN_03f99594();
    uVar14 = (uint)*puVar6;
    pcVar17 = *(code **)(*param_1 + 0x728);
    uVar12 = *(undefined8 *)(*param_1 + 0x730);
    goto LAB_07681a24;
  case 0xb:
    if (local_80 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_50 = (long *)((ulong)uVar14 << 0x20);
      puVar9 = (undefined2 *)FUN_039aef84(local_80,DAT_09535418);
      FUN_05c38f90(&local_50,*puVar9,DAT_091b75a8);
      plVar11 = (long *)((ulong)local_50 & 0xffffffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x838);
    uVar12 = *(undefined8 *)(*param_1 + 0x840);
    break;
  case 0xc:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_09535420 + 0x40)) goto LAB_07682080;
    puVar7 = (uint *)thunk_FUN_03f99594();
    uVar14 = *puVar7;
    pcVar17 = *(code **)(*param_1 + 0x6a8);
    uVar12 = *(undefined8 *)(*param_1 + 0x6b0);
    goto LAB_07681a24;
  case 0xd:
    if (local_80 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_50 = (long *)0x0;
      puVar10 = (undefined4 *)FUN_039aef84(local_80,DAT_09535420);
      FUN_05c3078c(&local_50,*puVar10,DAT_091b6f98);
      plVar11 = local_50;
    }
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x7b8);
    uVar12 = *(undefined8 *)(*param_1 + 0x7c0);
    break;
  case 0xe:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_095353f0 + 0x40)) goto LAB_07682080;
    pbVar8 = (byte *)thunk_FUN_03f99594();
    uVar14 = (uint)*pbVar8;
    pcVar17 = *(code **)(*param_1 + 0x748);
    uVar12 = *(undefined8 *)(*param_1 + 0x750);
    goto LAB_07681a24;
  case 0xf:
    if (local_80 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_50 = (long *)((ulong)local_50._2_6_ << 0x10);
      puVar5 = (undefined1 *)FUN_039aef84(local_80,DAT_095353f0);
      FUN_05c29a54(&local_50,*puVar5,DAT_091b6aa8);
      plVar11 = (long *)((ulong)local_50 & 0xffff);
    }
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x858);
    uVar12 = *(undefined8 *)(*param_1 + 0x860);
    break;
  case 0x10:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_09535428 + 0x40)) goto LAB_07682080;
    puVar7 = (uint *)thunk_FUN_03f99594();
    uVar14 = *puVar7;
    pcVar17 = *(code **)(*param_1 + 0x6b8);
    uVar12 = *(undefined8 *)(*param_1 + 0x6c0);
    goto LAB_07681a24;
  case 0x11:
    if (local_80 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_50 = (long *)0x0;
      puVar10 = (undefined4 *)FUN_039aef84(local_80,DAT_09535428);
      FUN_05c3931c(&local_50,*puVar10,DAT_091b75c8);
      plVar11 = local_50;
    }
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x7c8);
    uVar12 = *(undefined8 *)(*param_1 + 2000);
    break;
  case 0x12:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_09535440 + 0x40)) goto LAB_07682080;
    puVar3 = (ulong *)thunk_FUN_03f99594();
    plVar11 = (long *)*puVar3;
    pcVar17 = *(code **)(*param_1 + 0x6c8);
    uVar12 = *(undefined8 *)(*param_1 + 0x6d0);
    break;
  case 0x13:
    if (local_80 == (long *)0x0) {
      uVar16 = 0;
      plVar15 = (long *)0x0;
    }
    else {
      local_50 = (long *)0x0;
      uStack_48 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_80,DAT_09535440);
      FUN_05c30ed0(&local_50,*puVar4,DAT_091b6fc8);
      plVar15 = local_50;
      uVar16 = uStack_48;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x7d8);
      uVar12 = *(undefined8 *)(*param_1 + 0x7e0);
      goto LAB_07682024;
    }
    goto LAB_0768206c;
  case 0x14:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_09535448 + 0x40)) goto LAB_07682080;
    puVar3 = (ulong *)thunk_FUN_03f99594();
    plVar11 = (long *)*puVar3;
    pcVar17 = *(code **)(*param_1 + 0x6d8);
    uVar12 = *(undefined8 *)(*param_1 + 0x6e0);
    break;
  case 0x15:
    if (local_80 == (long *)0x0) {
      uVar16 = 0;
      plVar15 = (long *)0x0;
    }
    else {
      local_50 = (long *)0x0;
      uStack_48 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_80,DAT_09535448);
      FUN_05c396a8(&local_50,*puVar4,DAT_091b75e8);
      plVar15 = local_50;
      uVar16 = uStack_48;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x7e8);
      uVar12 = *(undefined8 *)(*param_1 + 0x7f0);
      goto LAB_07682024;
    }
    goto LAB_0768206c;
  case 0x16:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_09535450 + 0x40)) goto LAB_07682080;
    puVar10 = (undefined4 *)thunk_FUN_03f99594();
    (**(code **)(*param_1 + 0x6e8))(*puVar10,param_1,*(undefined8 *)(*param_1 + 0x6f0));
    goto LAB_07682048;
  case 0x17:
    if (local_80 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      local_50 = (long *)0x0;
      puVar10 = (undefined4 *)FUN_039aef84(local_80,DAT_09535450);
      FUN_05c37590(*puVar10,&local_50,DAT_091b73f0);
      plVar11 = local_50;
    }
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x7f8);
    uVar12 = *(undefined8 *)(*param_1 + 0x800);
    break;
  case 0x18:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_09535458 + 0x40)) goto LAB_07682080;
    puVar4 = (undefined8 *)thunk_FUN_03f99594();
    (**(code **)(*param_1 + 0x6f8))(*puVar4,param_1,*(undefined8 *)(*param_1 + 0x700));
    goto LAB_07682048;
  case 0x19:
    if (local_80 == (long *)0x0) {
      uVar16 = 0;
      plVar15 = (long *)0x0;
    }
    else {
      local_50 = (long *)0x0;
      uStack_48 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_80,DAT_09535458);
      FUN_05c2dd28(*puVar4,&local_50,DAT_091b6d48);
      plVar15 = local_50;
      uVar16 = uStack_48;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x808);
      uVar12 = *(undefined8 *)(*param_1 + 0x810);
      goto LAB_07682024;
    }
    goto LAB_0768206c;
  case 0x1a:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_09183548 + 0x40)) goto LAB_07682080;
    puVar3 = (ulong *)thunk_FUN_03f99594();
    plVar11 = (long *)*puVar3;
    pcVar17 = *(code **)(*param_1 + 0x778);
    uVar12 = *(undefined8 *)(*param_1 + 0x780);
    break;
  case 0x1b:
    if (local_80 == (long *)0x0) {
      uVar16 = 0;
      plVar15 = (long *)0x0;
    }
    else {
      local_50 = (long *)0x0;
      uStack_48 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_80,DAT_09183548);
      FUN_05c2c6a4(&local_50,*puVar4,DAT_091b6c38);
      plVar15 = local_50;
      uVar16 = uStack_48;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x888);
      uVar12 = *(undefined8 *)(*param_1 + 0x890);
      goto LAB_07682024;
    }
    goto LAB_0768206c;
  case 0x1c:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) == *(long *)(DAT_09183590 + 0x40)) {
      puVar3 = (ulong *)thunk_FUN_03f99594();
      plVar15 = (long *)*puVar3;
      uVar16 = puVar3[1];
      pcVar17 = *(code **)(*param_1 + 0x788);
      uVar12 = *(undefined8 *)(*param_1 + 0x790);
      goto LAB_07682024;
    }
    goto LAB_07682080;
  case 0x1d:
    if (local_80 == (long *)0x0) {
      local_a0 = (long *)0x0;
      uStack_98 = 0;
      local_90 = 0;
    }
    else {
      local_50 = (long *)0x0;
      uStack_48 = 0;
      local_40 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_80,DAT_09183590);
      FUN_05c2caec(&local_50,*puVar4,puVar4[1],DAT_091b6c60);
      uStack_98 = uStack_48;
      local_a0 = local_50;
      local_90 = local_40;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x898);
      uStack_48 = uStack_98;
      local_50 = local_a0;
      local_40 = local_90;
      uVar12 = *(undefined8 *)(*param_1 + 0x8a0);
      goto LAB_07681ffc;
    }
    goto LAB_0768206c;
  case 0x1e:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) == *(long *)(DAT_091837d8 + 0x40)) {
      puVar3 = (ulong *)thunk_FUN_03f99594();
      plVar15 = (long *)*puVar3;
      uVar16 = puVar3[1];
      pcVar17 = *(code **)(*param_1 + 0x768);
      uVar12 = *(undefined8 *)(*param_1 + 0x770);
      goto LAB_07682024;
    }
    goto LAB_07682080;
  case 0x1f:
    if (local_80 == (long *)0x0) {
      local_70 = (long *)0x0;
      uStack_68 = 0;
      local_60 = 0;
    }
    else {
      local_50 = (long *)0x0;
      uStack_48 = 0;
      local_40 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_80,DAT_091837d8);
      FUN_05c2d414(&local_50,*puVar4,puVar4[1],DAT_091b6cb8);
      uStack_68 = uStack_48;
      local_70 = local_50;
      local_60 = local_40;
    }
    if (param_1 != (long *)0x0) {
      pcVar17 = *(code **)(*param_1 + 0x878);
      uStack_48 = uStack_68;
      local_50 = local_70;
      local_40 = local_60;
      uVar12 = *(undefined8 *)(*param_1 + 0x880);
      goto LAB_07681ffc;
    }
    goto LAB_0768206c;
  case 0x20:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) == *(long *)(DAT_09184f30 + 0x40)) {
      puVar3 = (ulong *)thunk_FUN_03f99594();
      plVar15 = (long *)*puVar3;
      uVar16 = puVar3[1];
      pcVar17 = *(code **)(*param_1 + 0x798);
      uVar12 = *(undefined8 *)(*param_1 + 0x7a0);
      goto LAB_07682024;
    }
    goto LAB_07682080;
  case 0x21:
    if (local_80 == (long *)0x0) {
      local_c0 = (long *)0x0;
      uStack_b8 = 0;
      local_b0 = 0;
    }
    else {
      local_50 = (long *)0x0;
      uStack_48 = 0;
      local_40 = local_40 & 0xffffffff00000000;
      puVar4 = (undefined8 *)FUN_039aef84(local_80,DAT_09184f30);
      FUN_05c2ea08(&local_50,*puVar4,puVar4[1],DAT_091b6e80);
      uStack_b8 = uStack_48;
      local_c0 = local_50;
      local_b0 = (undefined4)local_40;
    }
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x8a8);
    uStack_48 = uStack_b8;
    local_50 = local_c0;
    local_40 = CONCAT44(local_40._4_4_,local_b0);
    uVar12 = *(undefined8 *)(*param_1 + 0x8b0);
LAB_07681ffc:
    (*pcVar17)(param_1,&local_50,uVar12);
    goto LAB_07682048;
  case 0x22:
    if ((param_1 == (long *)0x0) || (local_80 == (long *)0x0)) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) != *(long *)(DAT_0918bd60 + 0x40)) goto LAB_07682080;
    puVar3 = (ulong *)thunk_FUN_03f99594();
    plVar11 = (long *)*puVar3;
    pcVar17 = *(code **)(*param_1 + 0x7a8);
    uVar12 = *(undefined8 *)(*param_1 + 0x7b0);
    break;
  case 0x23:
    if (local_80 == (long *)0x0) {
      uVar16 = 0;
      plVar15 = (long *)0x0;
    }
    else {
      local_50 = (long *)0x0;
      uStack_48 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_80,DAT_0918bd60);
      FUN_05c381f8(&local_50,*puVar4,DAT_091b74f8);
      plVar15 = local_50;
      uVar16 = uStack_48;
    }
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x8b8);
    uVar12 = *(undefined8 *)(*param_1 + 0x8c0);
LAB_07682024:
    (*pcVar17)(param_1,plVar15,uVar16,uVar12);
    goto LAB_07682048;
  case 0x24:
    if (local_80 == (long *)0x0) goto LAB_0768206c;
    if (*(long *)(*local_80 + 0x40) == *(long *)(DAT_09181b78 + 0x40)) {
      puVar3 = (ulong *)thunk_FUN_03f99594();
      uStack_48 = puVar3[1];
      local_50 = (long *)*puVar3;
      lVar2 = DAT_09181b78;
      goto LAB_07681e14;
    }
    goto LAB_07682080;
  case 0x25:
    if (local_80 == (long *)0x0) {
      local_e0 = (long *)0x0;
      uStack_d8 = 0;
      local_d0 = 0;
    }
    else {
      local_50 = (long *)0x0;
      uStack_48 = 0;
      local_40 = 0;
      puVar4 = (undefined8 *)FUN_039aef84(local_80,DAT_09181b78);
      FUN_05c28218(&local_50,*puVar4,puVar4[1],DAT_091b69f8);
      uStack_d8 = uStack_48;
      local_e0 = local_50;
      local_d0 = local_40;
    }
    uStack_48 = uStack_d8;
    local_50 = local_e0;
    local_40 = local_d0;
    lVar2 = DAT_0917dc18;
LAB_07681e14:
    plVar11 = (long *)FUN_03f5c42c(lVar2,&local_50);
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    pcVar17 = *(code **)(*param_1 + 0x8e8);
    uVar12 = *(undefined8 *)(*param_1 + 0x8f0);
    break;
  case 0x26:
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    if (local_80 != (long *)0x0) {
      lVar2 = DAT_0918c918;
      if ((*(byte *)(*local_80 + 0x130) < *(byte *)(DAT_0918c918 + 0x130)) ||
         (*(long *)(*(long *)(*local_80 + 200) + (ulong)*(byte *)(DAT_0918c918 + 0x130) * 8 + -8) !=
          DAT_0918c918)) goto LAB_07682094;
    }
    pcVar17 = *(code **)(*param_1 + 0x8d8);
    uVar12 = *(undefined8 *)(*param_1 + 0x8e0);
    break;
  case 0x27:
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    if ((local_80 != (long *)0x0) && (lVar2 = DAT_09535468, *local_80 != DAT_09535468)) {
LAB_07682094:
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(local_80,lVar2);
      }
      goto LAB_076820f8;
    }
    pcVar17 = *(code **)(*param_1 + 0x698);
    uVar12 = *(undefined8 *)(*param_1 + 0x6a0);
    break;
  case 0x28:
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    if (local_80 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)thunk_FUN_03f99350(local_80,DAT_0917fc88);
      if (plVar11 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar15,uVar12);
        }
        goto LAB_076820f8;
      }
    }
    pcVar17 = *(code **)(*param_1 + 0x8c8);
    uVar12 = *(undefined8 *)(*param_1 + 0x8d0);
    break;
  case 0x29:
switchD_076813ac_caseD_29:
    if (param_1 == (long *)0x0) goto LAB_0768206c;
    (**(code **)(*param_1 + 0x658))(param_1,*(undefined8 *)(*param_1 + 0x660));
    goto LAB_07682048;
  default:
    lVar2 = thunk_FUN_03f99350(local_80,DAT_091858c0);
    plVar15 = local_80;
    if (lVar2 != 0) goto code_r0x0768136c;
    if (local_80 == (long *)0x0) goto switchD_076813ac_caseD_29;
    thunk_FUN_03fc39d4(&DAT_09187490);
    FUN_039afb80();
    uVar12 = Newtonsoft_Json_JsonWriter__CreateUnsupportedTypeException(param_1,plVar15);
    uVar13 = thunk_FUN_03fc39d4(&DAT_091d1fd8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar12,uVar13);
    }
    goto LAB_076820f8;
  }
  (*pcVar17)(param_1,plVar11,uVar12);
  goto LAB_07682048;
code_r0x0768136c:
  if (*(int *)(DAT_09187490 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Newtonsoft_Json_JsonWriter__ResolveConvertibleValue(lVar2,&local_74,&local_80);
  param_2 = local_74;
  goto LAB_07681350;
}

