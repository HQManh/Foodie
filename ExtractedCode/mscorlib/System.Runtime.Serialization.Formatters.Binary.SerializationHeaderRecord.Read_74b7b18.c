// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord$$Read
// address: 0x74b7b18
// body: available
// range: 0x74b7b18-0x74b7c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b7bbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b7c5c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b7c60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord__Read
               (long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_2 == 0) ||
     (lVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadBytes
                        (param_2,0x11,0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar3 + 0x18) < 0x11) {
    System_IO___Error__EndOfFile(0);
  }
  iVar1 = System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord__GetInt32
                    (lVar3,9);
  *(int *)(param_1 + 0x24) = iVar1;
  if (iVar1 <= *(int *)(param_1 + 0x10)) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(uint *)(param_1 + 0x18) = (uint)*(byte *)(lVar3 + 0x20);
      uVar2 = System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord__GetInt32
                        (lVar3,1);
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      uVar2 = System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord__GetInt32
                        (lVar3,5);
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      uVar2 = System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord__GetInt32
                        (lVar3,0xd);
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
  uVar4 = FUN_03f5c394(uVar4,1);
  uVar5 = System_BitConverter__ToString(lVar3,0);
  FUN_039b1d98(uVar4);
  FUN_039b0da0(uVar4,uVar5);
  FUN_039af17c(uVar4,0,uVar5);
  uVar5 = thunk_FUN_03fc39d4(&DAT_0920f6f0);
  uVar4 = System_Environment__GetResourceString(uVar5,uVar4,0);
  thunk_FUN_03fc39d4(&DAT_0918a948);
  uVar5 = thunk_FUN_03f9944c();
  System_Runtime_Serialization_SerializationException___ctor(uVar5,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d89e0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar4);
}

