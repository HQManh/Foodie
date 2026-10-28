// rea decompile_all
// name: System.TermInfoDriver$$.ctor
// address: 0x75ff90c
// body: available
// range: 0x75ff90c-0x75ffcab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ffc90 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75ffc9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ffca8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TermInfoDriver___ctor(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_0952200d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182200);
    FUN_03f5c2a4(&DAT_09182a20);
    FUN_03f5c2a4(&DAT_09188ac8);
    FUN_03f5c2a4(&DAT_0918ba00);
    FUN_03f5c2a4(&DAT_0918ba08);
    FUN_03f5c2a4(&DAT_09225c80);
    FUN_03f5c2a4(&DAT_0921e8f0);
    DAT_0952200d = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(DAT_09535468 + 0xb8);
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(DAT_09535468 + 0xb8);
  thunk_FUN_03f5d7b8();
  uVar2 = DAT_09188ac8;
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0xd0) = 0xf;
  *(undefined8 *)(param_1 + 0x100) = 0xffffffffffffffff;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),param_2);
  if (*(int *)(DAT_0918ba00 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = System_TermInfoDriver__SearchTerminfo(param_2);
  if (lVar3 == 0) {
    uVar4 = System_String__op_Equality(param_2,DAT_09225c80,0);
    if ((uVar4 & 1) != 0) {
      uVar2 = System_KnownTerminals__get_xterm();
LAB_075ffaa0:
      auVar7 = thunk_FUN_03f9944c(DAT_0918ba08);
      uVar6 = auVar7._0_8_;
      System_TermInfoReader___ctor(uVar6,auVar7._8_8_,uVar2);
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      goto LAB_075ffac8;
    }
    uVar4 = System_String__op_Equality(param_2,DAT_0921e8f0,0);
    if ((uVar4 & 1) != 0) {
      uVar2 = System_KnownTerminals__get_linux();
      goto LAB_075ffaa0;
    }
  }
  else {
    auVar7 = thunk_FUN_03f9944c(DAT_0918ba08);
    uVar6 = auVar7._0_8_;
    System_TermInfoReader___ctor(uVar6,auVar7._8_8_,lVar3);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
LAB_075ffac8:
    thunk_FUN_03f5d7b8(param_1 + 0x10,uVar6);
  }
  plVar5 = (long *)(param_1 + 0x10);
  if (*plVar5 == 0) {
    uVar2 = System_KnownTerminals__get_ansi();
    auVar7 = thunk_FUN_03f9944c(DAT_0918ba08);
    lVar3 = auVar7._0_8_;
    System_TermInfoReader___ctor(lVar3,auVar7._8_8_,uVar2);
    *plVar5 = lVar3;
    thunk_FUN_03f5d7b8(plVar5,lVar3);
  }
  if (*(int *)(DAT_09182a20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar5 = (long *)**(long **)(DAT_09182a20 + 0xb8);
  if (plVar5 == (long *)0x0) {
LAB_075ffb64:
    if (*(int *)(DAT_09182a20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Console__OpenStandardOutput(0);
    if (DAT_0952203e == '\0') {
      FUN_03f5c2a4(&DAT_09182a20);
      DAT_0952203e = '\x01';
    }
    if (*(int *)(DAT_09182a20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = *(undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 0x28);
    lVar3 = thunk_FUN_03f9944c(DAT_09182200);
    System_IO_CStreamWriter___ctor(lVar3,uVar2,uVar6,0,0);
    plVar5 = (long *)(param_1 + 0x68);
    *plVar5 = lVar3;
    thunk_FUN_03f5d7b8(plVar5,lVar3);
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
                    /* WARNING: Could not recover jumptable at 0x075ffc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x308))(plVar5,1,*(undefined8 *)(*plVar5 + 0x310));
    return;
  }
  if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_09182200 + 0x130)) ||
     (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09182200 + 0x130) * 8 + -8) !=
      DAT_09182200)) goto LAB_075ffb64;
  if (*(int *)(DAT_09182a20 + 0xe4) == 0) {
    FUN_03f5c424();
    plVar5 = (long *)**(long **)(DAT_09182a20 + 0xb8);
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      goto LAB_075ffc80;
    }
  }
  lVar3 = DAT_09182200;
  bVar1 = *(byte *)(DAT_09182200 + 0x130);
  if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
     (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == DAT_09182200)) {
    *(long **)(param_1 + 0x68) = plVar5;
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == lVar3)) {
LAB_075ffc80:
      thunk_FUN_03f5d7b8(param_1 + 0x68);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(plVar5,lVar3);
}

