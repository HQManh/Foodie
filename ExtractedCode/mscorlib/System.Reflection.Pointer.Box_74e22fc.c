// rea decompile_all
// name: System.Reflection.Pointer$$Box
// address: 0x74e22fc
// body: available
// range: 0x74e22fc-0x74e246f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e23f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e246c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Reflection_Pointer__Box(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_095215a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189358);
    DAT_095215a3 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__op_Equality(param_2,0,0);
  if ((uVar1 & 1) == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = System_Type__get_IsPointer(param_2,0);
    if ((uVar1 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar3 = thunk_FUN_03f9944c();
      puVar4 = &DAT_09211248;
    }
    else {
      uVar1 = System_Type__IsRuntimeImplemented(param_2,0);
      if ((uVar1 & 1) != 0) {
        lVar2 = thunk_FUN_03f9944c(DAT_09189358);
        System_Object___ctor(lVar2,0);
        *(undefined8 *)(lVar2 + 0x10) = param_1;
        *(long *)(lVar2 + 0x18) = param_2;
        thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),param_2);
        return lVar2;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar3 = thunk_FUN_03f9944c();
      puVar4 = &DAT_09211258;
    }
    uVar5 = thunk_FUN_03fc39d4(puVar4);
    uVar6 = thunk_FUN_03fc39d4(&DAT_092212c0);
    System_ArgumentException___ctor(uVar3,uVar5,uVar6,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09224510);
    System_ArgumentNullException___ctor(uVar3,uVar5,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d5ea8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar5);
}

