// rea decompile_all
// name: System.DateTimeOffset$$.ctor
// address: 0x759a398
// body: available
// range: 0x759a398-0x759a523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x759a4d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759a4d8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759a520 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTimeOffset___ctor(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  if ((DAT_09521be2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171448);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09209728);
    FUN_03f5c2a4(&DAT_09200200);
    DAT_09521be2 = 1;
  }
  uVar2 = DAT_09171448;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar2,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091c7a60);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar6);
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_09200200,uVar2,0);
  if (plVar3 != (long *)0x0) {
    if (*(long *)(*plVar3 + 0x40) == *(long *)(DAT_09183548 + 0x40)) {
      puVar4 = (undefined8 *)thunk_FUN_03f99594();
      lVar1 = DAT_09535410 + 0x20;
      *param_1 = *puVar4;
      uVar2 = System_Type__GetTypeFromHandle(lVar1,0);
      plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                 (param_2,DAT_09209728,uVar2,0);
      if (plVar3 == (long *)0x0) goto LAB_0759a4d4;
      if (*(long *)(*plVar3 + 0x40) == *(long *)(DAT_09535410 + 0x40)) {
        puVar5 = (undefined2 *)thunk_FUN_03f99594();
        *(undefined2 *)(param_1 + 1) = *puVar5;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0();
  }
LAB_0759a4d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

