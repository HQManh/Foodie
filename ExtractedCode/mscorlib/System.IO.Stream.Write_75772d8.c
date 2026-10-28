// rea decompile_all
// name: System.IO.Stream$$Write
// address: 0x75772d8
// body: available
// range: 0x75772d8-0x757746b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7577468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Stream__Write(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_28;
  
  local_40 = param_2;
  local_38 = param_3;
  if ((DAT_09521acf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_091b9760);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091ba938);
    DAT_09521acf = 1;
  }
  local_28 = 0;
  if (*(int *)(DAT_09175020 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = DAT_09197190;
  lVar1 = *(long *)(DAT_09197190 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  plVar3 = (long *)**(long **)(lVar2 + 0xb8);
  if (plVar3 != (long *)0x0) {
    local_28 = (**(code **)(*plVar3 + 0x178))
                         (plVar3,param_3 & 0xffffffff,*(undefined8 *)(*plVar3 + 0x180));
    puStack_48 = &local_28;
    local_50 = 0;
    auVar4 = FUN_0610892c(local_28,DAT_091ba938);
    FUN_05ff5c28(&local_40,auVar4._0_8_,auVar4._8_8_,DAT_091b9760);
    (**(code **)(*param_1 + 0x398))
              (param_1,local_28,0,local_38 & 0xffffffff,*(undefined8 *)(*param_1 + 0x3a0));
    FUN_03eab060(&local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

