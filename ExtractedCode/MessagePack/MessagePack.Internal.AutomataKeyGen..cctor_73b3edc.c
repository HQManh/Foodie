// rea decompile_all
// name: MessagePack.Internal.AutomataKeyGen$$.cctor
// address: 0x73b3edc
// body: available
// range: 0x73b3edc-0x73b4097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b4038 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73b403c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b4040 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b4088 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b4094 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_AutomataKeyGen___cctor(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09520bf6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170f90);
    FUN_03f5c2a4(&DAT_09181960);
    FUN_03f5c2a4(&DAT_09170ac8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09203598);
    DAT_09520bf6 = 1;
  }
  uVar1 = DAT_09170f90;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
  plVar2 = (long *)FUN_03f5c394(DAT_09180748,1);
  plVar3 = (long *)System_Type__GetTypeFromHandle(DAT_09170ac8,0);
  if (plVar3 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x938))(plVar3,*(undefined8 *)(*plVar3 + 0x940));
    if (plVar2 != (long *)0x0) {
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
        uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar1,0);
      }
      if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar2[4] = lVar4;
      thunk_FUN_03f5d7b8(plVar2 + 4,lVar4);
      lVar4 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                        (uVar1,DAT_09203598,plVar2,0);
      if (lVar4 != 0) {
        **(long **)(DAT_09181960 + 0xb8) = lVar4;
        thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09181960 + 0xb8),lVar4);
        return;
      }
      thunk_FUN_03fc39d4(&DAT_091842a0);
      uVar1 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_09211a00);
      System_Exception___ctor(uVar1,uVar6,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091c3430);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

