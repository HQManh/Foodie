// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.BinaryConverter$$ReadTypeInfo
// address: 0x74b6570
// body: available
// range: 0x74b6570-0x74b672b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b6674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b6728 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Serialization_Formatters_Binary_BinaryConverter__ReadTypeInfo
          (int param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_28;
  uint local_24;
  
  if ((DAT_0952144b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187008);
    DAT_0952144b = 1;
  }
  uVar3 = 0;
  uVar1 = 0;
  if (param_1 < 4) {
    if (param_1 - 1U < 2) goto LAB_074b665c;
    if (param_1 == 0) goto LAB_074b6600;
    if (param_1 != 3) {
LAB_074b6678:
      uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar3 = FUN_03f5c394(uVar3,1);
      local_28 = param_1;
      uVar2 = thunk_FUN_03fc39d4(&DAT_09181ca8);
      uVar2 = FUN_03f5c42c(uVar2,&local_28);
      uVar2 = System_Enum__ToString(uVar2,0);
      FUN_039b1d98(uVar3);
      FUN_039b0da0(uVar3,uVar2);
      FUN_039af17c(uVar3,0,uVar2);
      uVar2 = thunk_FUN_03fc39d4(&DAT_09205a08);
      uVar3 = System_Environment__GetResourceString(uVar2,uVar3,0);
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar2 = thunk_FUN_03f9944c();
      System_Runtime_Serialization_SerializationException___ctor(uVar2,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091c38d8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
    if (param_2 == 0) goto LAB_074b6674;
    uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadString(param_2,0);
  }
  else {
    if (param_1 - 5U < 2) goto LAB_074b665c;
    if (param_1 == 4) {
      if (param_2 != 0) {
        uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadString(param_2,0)
        ;
        uVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
        goto LAB_074b665c;
      }
      goto LAB_074b6674;
    }
    if (param_1 != 7) goto LAB_074b6678;
LAB_074b6600:
    if (param_2 == 0) {
LAB_074b6674:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_24 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadByte(param_2,0);
    local_24 = local_24 & 0xff;
    uVar3 = FUN_03f5c42c(DAT_09187008,&local_24);
  }
  uVar1 = 0;
LAB_074b665c:
  *param_3 = uVar1;
  return uVar3;
}

