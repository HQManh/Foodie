// rea decompile_all
// name: System.Text.ValueStringBuilder$$Grow
// address: 0x744bec8
// body: available
// range: 0x744bec8-0x744c12b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744c128 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_ValueStringBuilder__Grow(long *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_095210c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197198);
    FUN_03f5c2a4(&DAT_09175028);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091ba960);
    FUN_03f5c2a4(&DAT_091ba998);
    FUN_03f5c2a4(&DAT_091ba9a8);
    DAT_095210c0 = 1;
  }
  if (*(int *)(DAT_09175028 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = DAT_09197198;
  lVar2 = *(long *)(DAT_09197198 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(lVar3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar2 = param_1[3];
  lVar4 = param_1[2];
  plVar5 = (long *)**(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09187e80);
  }
  uVar1 = System_Math__Max((int)lVar2 + param_2,(int)lVar4 << 1,0);
  if (plVar5 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar5 + 0x178))(plVar5,uVar1,*(undefined8 *)(*plVar5 + 0x180));
    auVar6 = FUN_06109734(lVar3,DAT_091ba9a8);
    FUN_06109210(param_1 + 1,auVar6._0_8_,auVar6._8_8_,DAT_091ba960);
    lVar2 = *param_1;
    *param_1 = lVar3;
    auVar6 = FUN_06109734(lVar3,DAT_091ba9a8);
    *(undefined1 (*) [16])(param_1 + 1) = auVar6;
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(DAT_09175028 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = DAT_09197198;
    lVar4 = *(long *)(DAT_09197198 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    plVar5 = (long *)**(long **)(lVar3 + 0xb8);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0744c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x188))(plVar5,lVar2,0,*(undefined8 *)(*plVar5 + 400));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

