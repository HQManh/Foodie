// rea decompile_all
// name: System.IO.BinaryWriter$$Write
// address: 0x75847fc
// body: available
// range: 0x75847fc-0x75848f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75848a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75848f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_BinaryWriter__Write(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined2 local_14 [2];
  
  local_14[0] = (undefined2)param_2;
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Char__IsSurrogate(param_2,0);
  if ((uVar3 & 1) != 0) {
    uVar5 = thunk_FUN_03fc39d4(&DAT_09212040);
    uVar5 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar6 = thunk_FUN_03f9944c();
    System_ArgumentException___ctor(uVar6,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c3e08);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar5);
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if ((lVar7 != 0) && (plVar4 = *(long **)(param_1 + 0x28), plVar4 != (long *)0x0)) {
    lVar1 = 0;
    if (*(int *)(lVar7 + 0x18) != 0) {
      lVar1 = lVar7 + 0x20;
    }
    uVar2 = (**(code **)(*plVar4 + 0x1b8))
                      (plVar4,local_14,1,lVar1,*(int *)(lVar7 + 0x18),1,
                       *(undefined8 *)(*plVar4 + 0x1c0));
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x398))
                (plVar4,*(undefined8 *)(param_1 + 0x18),0,uVar2,*(undefined8 *)(*plVar4 + 0x3a0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

