// rea decompile_all
// name: System.Runtime.InteropServices.COMException$$ToString
// address: 0x74ccaf8
// body: available
// range: 0x74ccaf8-0x74cccdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74cccdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Runtime_InteropServices_COMException__ToString(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_44;
  
  if ((DAT_095214e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091f5e00);
    FUN_03f5c2a4(&DAT_091f9f60);
    FUN_03f5c2a4(&DAT_09213570);
    FUN_03f5c2a4(&DAT_091f5cd8);
    FUN_03f5c2a4(&DAT_091f83f0);
    DAT_095214e9 = 1;
  }
  local_44 = 0;
  lVar1 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  plVar2 = (long *)System_Exception__GetType(param_1,0);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    local_44 = (undefined4)param_1[0xc];
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar4 = System_Int32__ToString(&local_44,DAT_09213570,uVar4,0);
    uVar3 = System_String__Concat(uVar3,DAT_091f5cd8,uVar4,DAT_091f83f0,0);
    if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x10))) {
      uVar3 = System_String__Concat(uVar3,DAT_091f9f60,lVar1,0);
    }
    plVar2 = (long *)param_1[5];
    if (plVar2 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      uVar3 = System_String__Concat(uVar3,DAT_091f5e00,uVar4,0);
    }
    lVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    if (lVar1 != 0) {
      uVar4 = System_Environment__get_NewLine(0);
      uVar5 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
      uVar3 = System_String__Concat(uVar3,uVar4,uVar5,0);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

