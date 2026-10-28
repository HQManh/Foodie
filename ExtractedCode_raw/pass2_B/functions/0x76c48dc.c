// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonTypeReflector$$GetCreator
// address: 0x76c48dc
// body: available
// range: 0x76c48dc-0x76c4a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c4a5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Serialization_JsonTypeReflector__GetCreator(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((DAT_095226f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091783a8);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091d7110);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_091ec100);
    FUN_03f5c2a4(&DAT_09192038);
    DAT_095226f9 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09192038);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)(lVar1 + 0x10);
    *puVar5 = param_1;
    thunk_FUN_03f5d7b8(puVar5,param_1);
    uVar6 = *puVar5;
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Utilities_ReflectionUtils__HasDefaultConstructor(uVar6,0,0);
    uVar6 = 0;
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_09187480 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar3 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                 ();
      if (plVar3 == (long *)0x0) goto LAB_076c4a5c;
      uVar6 = *puVar5;
      lVar4 = FUN_03f5c420(*(undefined8 *)
                            (*plVar3 + (ulong)*(ushort *)(DAT_091d7110 + 0x50) * 0x10 + 0x140));
      uVar6 = (**(code **)(lVar4 + 8))(plVar3,uVar6,lVar4);
    }
    *(undefined8 *)(lVar1 + 0x18) = uVar6;
    thunk_FUN_03f5d7b8();
    uVar6 = thunk_FUN_03f9944c(DAT_091783a8);
    FUN_05324070(uVar6,lVar1,DAT_091ec100,0);
    return uVar6;
  }
LAB_076c4a5c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

