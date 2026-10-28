// rea decompile_all
// name: System.TermInfoDriver$$Init
// address: 0x7608738
// body: available
// range: 0x7608738-0x7608e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7608dac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7608df4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7608df8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7608dfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7608e00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7608e04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7608e08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7608e0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7608e10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7608e14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7608e18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7608e1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07608dac) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_TermInfoDriver__Init(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  char local_3c [4];
  undefined8 local_38;
  
  if ((DAT_0952200e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182a38);
    FUN_03f5c2a4(&DAT_09182a20);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0918b320);
    FUN_03f5c2a4(&DAT_0918ba00);
    FUN_03f5c2a4(&DAT_091f5a70);
    FUN_03f5c2a4(&DAT_09223858);
    FUN_03f5c2a4(&DAT_091f5a78);
    FUN_03f5c2a4(&DAT_0921aaa0);
    FUN_03f5c2a4(&DAT_091f5a60);
    FUN_03f5c2a4(&DAT_0921d888);
    FUN_03f5c2a4(&DAT_09225c80);
    FUN_03f5c2a4(&DAT_0921e8f0);
    FUN_03f5c2a4(&DAT_09221df8);
    FUN_03f5c2a4(&DAT_0921a0b8);
    DAT_0952200e = 1;
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    return;
  }
  local_38 = *(undefined8 *)(param_1 + 0xa8);
  local_3c[0] = '\0';
  System_Threading_Monitor__Enter(local_38,local_3c,0);
  if (*(char *)(param_1 + 0xa0) != '\0') goto LAB_07608d24;
  if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_ConsoleDriver__get_IsConsole();
  if ((uVar2 & 1) == 0) {
    thunk_FUN_03fc39d4(&DAT_09186188);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09208ec8);
    System_IO_IOException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091db130);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  thunk_FUN_03f8e5bc(0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0x59);
  plVar7 = (long *)(param_1 + 0x90);
  *plVar7 = lVar3;
  thunk_FUN_03f5d7b8(plVar7);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0x58);
  plVar8 = (long *)(param_1 + 0x98);
  *plVar8 = lVar3;
  thunk_FUN_03f5d7b8(plVar8);
  if (*plVar7 == 0) {
LAB_0760890c:
    uVar4 = 0;
  }
  else {
    System_TermInfoDriver__WriteConsole(param_1);
    if (*plVar8 == 0) goto LAB_0760890c;
    uVar4 = System_String__Concat(0,*plVar8,0);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0x129);
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  thunk_FUN_03f5d7b8();
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0x12a);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  thunk_FUN_03f5d7b8();
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0x167);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  thunk_FUN_03f5d7b8();
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0x168);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  thunk_FUN_03f5d7b8();
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0xd);
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Math__Min(uVar1,0x10,0);
  uVar1 = System_Math__Max(uVar5,1,0);
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  lVar3 = 0xb8;
  if (*(long *)(param_1 + 0xc0) != 0) {
    lVar3 = 0xc0;
  }
  if (*(long *)(param_1 + lVar3) != 0) {
    uVar4 = System_String__Concat(uVar4,*(long *)(param_1 + lVar3),0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  if (*(int *)(DAT_0918ba00 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = FUN_03f7275c(uVar5,uVar4,param_1 + 0x108,*(undefined8 *)(DAT_0918ba00 + 0xb8));
  if ((uVar2 & 1) == 0) {
    uVar4 = FUN_03f5c394(DAT_0917fc88,0x11);
    *(undefined8 *)(param_1 + 0x108) = uVar4;
    thunk_FUN_03f5d7b8(param_1 + 0x108);
    if (*(int *)(DAT_0918ba00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    **(undefined8 **)(DAT_0918ba00 + 0xb8) = 0;
  }
  if (*(int *)(DAT_09182a20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Console__OpenStandardInput(0);
  if (DAT_0952203f == '\0') {
    FUN_03f5c2a4(&DAT_09182a20);
    DAT_0952203f = '\x01';
  }
  if (*(int *)(DAT_09182a20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = *(undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 0x20);
  uVar5 = thunk_FUN_03f9944c(DAT_0918b320);
  System_IO_StreamReader___ctor(uVar5,uVar4,uVar9,0);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),uVar5);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),5);
  plVar7 = (long *)(param_1 + 0x48);
  *plVar7 = lVar3;
  thunk_FUN_03f5d7b8(plVar7);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),1);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  thunk_FUN_03f5d7b8();
  if (*plVar7 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0xc);
    *plVar7 = lVar3;
    thunk_FUN_03f5d7b8(plVar7);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),7);
    lVar3 = System_String__Concat(uVar5,uVar4,0);
    *plVar7 = lVar3;
    thunk_FUN_03f5d7b8(plVar7);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0x10);
  plVar7 = (long *)(param_1 + 0x38);
  *plVar7 = lVar3;
  thunk_FUN_03f5d7b8(plVar7);
  if (*plVar7 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0x14);
    *plVar7 = lVar3;
    thunk_FUN_03f5d7b8(plVar7);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),0xd);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  thunk_FUN_03f5d7b8();
  uVar2 = System_String__op_Equality(*(undefined8 *)(param_1 + 0x58),DAT_0921a0b8,0);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = System_String__op_Equality(*(undefined8 *)(param_1 + 0x58),DAT_0921e8f0,0),
     (uVar2 & 1) == 0)) {
    uVar4 = 0;
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar2 = System_String__StartsWith(*(long *)(param_1 + 0x58),DAT_09225c80,0);
      if ((uVar2 & 1) != 0) goto LAB_07608cc4;
      uVar4 = *(undefined8 *)(param_1 + 0x58);
    }
    uVar2 = System_String__op_Equality(uVar4,DAT_09221df8,0);
    if (((uVar2 & 1) != 0) ||
       (uVar2 = System_String__op_Equality(*(undefined8 *)(param_1 + 0x58),DAT_0921aaa0,0),
       (uVar2 & 1) != 0)) goto LAB_07608cc4;
    uVar2 = System_String__op_Equality(*(undefined8 *)(param_1 + 0x58),DAT_0921d888,0);
    if ((uVar2 & 1) != 0) {
      puVar6 = &DAT_091f5a60;
      goto LAB_07608ccc;
    }
    uVar2 = System_String__op_Equality(*(undefined8 *)(param_1 + 0x58),DAT_09223858,0);
    if ((uVar2 & 1) != 0) {
      puVar6 = &DAT_091f5a78;
      goto LAB_07608ccc;
    }
  }
  else {
LAB_07608cc4:
    puVar6 = &DAT_091f5a70;
LAB_07608ccc:
    *(undefined8 *)(param_1 + 0x28) = *puVar6;
    thunk_FUN_03f5d7b8();
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = System_TermInfoReader__Get(*(long *)(param_1 + 0x10),10);
  *(undefined8 *)(param_1 + 200) = uVar4;
  thunk_FUN_03f5d7b8();
  System_TermInfoDriver__GetCursorPosition(param_1);
  if (*(char *)(param_1 + 0xec) != '\0') {
    System_TermInfoDriver__WriteConsole(param_1,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0xa0) = 1;
LAB_07608d24:
  if (local_3c[0] != '\0') {
    System_Threading_Monitor__Exit(local_38,0);
  }
  return;
}

