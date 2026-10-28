// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadCrossAppDomainMap
// address: 0x74c7844
// body: available
// range: 0x74c7844-0x74c7a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c791c to 0x74c9f50 System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadObjectWithMapTyped (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c793c to 0x74c9adc System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadObjectWithMap (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c7940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c7a00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadCrossAppDomainMap
               (long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_095214bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c20);
    FUN_03f5c2a4(&DAT_09181c98);
    FUN_03f5c2a4(&DAT_09181c90);
    DAT_095214bd = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09181c20);
  System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainMap___ctor(lVar1,0);
  if (lVar1 != 0) {
    System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainMap__Read(lVar1,param_1,0);
    System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainMap__Dump(lVar1,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar2 = (long *)System_Runtime_Serialization_Formatters_Binary_ObjectReader__CrossAppDomainArray
                                 (*(long *)(param_1 + 0x10),*(undefined4 *)(lVar1 + 0x10),0);
      if (plVar2 != (long *)0x0) {
        if (*plVar2 == DAT_09181c90) {
          System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMap__Dump(plVar2,0);
          System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObjectWithMap
                    (param_1,plVar2);
          return;
        }
        if (*plVar2 == DAT_09181c98) {
          System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObjectWithMapTyped
                    (param_1,plVar2);
          return;
        }
      }
      uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar3 = FUN_03f5c394(uVar3,2);
      FUN_039b1d98();
      uVar4 = thunk_FUN_03fc39d4(&DAT_091fcb10);
      FUN_039b0da0(uVar3,uVar4);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091fcb10);
      FUN_039af17c(uVar3,0,uVar4);
      FUN_039b0da0(uVar3,plVar2);
      FUN_039af17c(uVar3,1,plVar2);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091ff960);
      uVar3 = System_Environment__GetResourceString(uVar4,uVar3,0);
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar4 = thunk_FUN_03f9944c();
      System_Runtime_Serialization_SerializationException___ctor(uVar4,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091e0e38);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

