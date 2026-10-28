// rea decompile_all
// name: Newtonsoft.Json.Utilities.FSharpUtils$$CreateFSharpFuncCall
// address: 0x769332c
// body: available
// range: 0x769332c-0x7693527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7693524 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_FSharpUtils__CreateFSharpFuncCall(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_095225ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184480);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_0917da00);
    FUN_03f5c2a4(&DAT_091d7128);
    FUN_03f5c2a4(&DAT_091e9f90);
    FUN_03f5c2a4(&DAT_091908a0);
    FUN_03f5c2a4(&DAT_09205c90);
    DAT_095225ae = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091908a0);
  System_Object___ctor(lVar1,0);
  if (*(int *)(DAT_09184480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)Newtonsoft_Json_Utilities_FSharpUtils__GetMethodWithNonPublicFallback
                             (param_1,param_2,0x18);
  if (plVar2 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x3f8))(plVar2,*(undefined8 *)(*plVar2 + 0x400));
    if (lVar3 != 0) {
      uVar4 = System_Type__GetMethod(lVar3,DAT_09205c90,0x14,0);
      if (*(int *)(DAT_09187480 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187480);
      }
      plVar5 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                 (0);
      if (plVar5 != (long *)0x0) {
        lVar3 = FUN_03f5c420(*(undefined8 *)
                              (*plVar5 + (ulong)*(ushort *)(DAT_091d7128 + 0x50) * 0x10 + 0x140));
        uVar6 = (**(code **)(lVar3 + 8))(plVar5,plVar2,lVar3);
        if (lVar1 != 0) {
          *(undefined8 *)(lVar1 + 0x10) = uVar6;
          thunk_FUN_03f5d7b8();
          plVar2 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                     (0);
          if (plVar2 != (long *)0x0) {
            lVar3 = FUN_03f5c420(*(undefined8 *)
                                  (*plVar2 + (ulong)*(ushort *)(DAT_091d7128 + 0x50) * 0x10 + 0x140)
                                );
            uVar4 = (**(code **)(lVar3 + 8))(plVar2,uVar4,lVar3);
            *(undefined8 *)(lVar1 + 0x18) = uVar4;
            thunk_FUN_03f5d7b8();
            uVar4 = thunk_FUN_03f9944c(DAT_0917da00);
            FUN_05a80e64(uVar4,lVar1,DAT_091e9f90,0);
            return uVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

