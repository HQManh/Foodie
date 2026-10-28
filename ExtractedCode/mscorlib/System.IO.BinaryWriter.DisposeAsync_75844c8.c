// rea decompile_all
// name: System.IO.BinaryWriter$$DisposeAsync
// address: 0x75844c8
// body: available
// range: 0x75844c8-0x75845eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7584578 to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75845e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75845e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_IO_BinaryWriter__DisposeAsync(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_40 [3];
  undefined4 local_28;
  
  if ((DAT_09521b00 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170ff8);
    DAT_09521b00 = 1;
  }
  local_28 = 0;
  uVar1 = System_Object__GetType(param_1,0);
  uVar2 = DAT_09170ff8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  uVar3 = System_Type__op_Equality(uVar1,uVar2,0);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*param_1 + 0x1a8))(param_1,1,*(undefined8 *)(*param_1 + 0x1b0));
  }
  else {
    plVar4 = (long *)param_1[2];
    if ((char)param_1[6] != '\0') {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = System_IO_Stream__FlushAsync();
      local_40[0] = 0;
      local_40[1] = 0;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentNullException(0x26,0);
      }
      local_40[0] = lVar5;
      thunk_FUN_03f5d7b8(local_40,lVar5);
      uVar2 = CONCAT53((int5)((ulong)local_40[1] >> 0x18),0x10000);
      goto LAB_075845d4;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
  }
  local_40[0] = 0;
  uVar2 = 0;
LAB_075845d4:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = local_40[0];
  return auVar6;
}

