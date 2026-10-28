// rea decompile_all
// name: System.RuntimeTypeHandle$$GetObjectData
// address: 0x7607998
// body: available
// range: 0x7607998-0x7607b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7607b14 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_RuntimeTypeHandle__GetObjectData(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  long local_38;
  
  if ((DAT_09522007 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a408);
    FUN_03f5c2a4(&DAT_09172b38);
    FUN_03f5c2a4(&DAT_092113b8);
    DAT_09522007 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar1 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar2,uVar1,0);
  }
  else {
    local_38 = *param_1;
    if (local_38 != 0) {
      uVar1 = FUN_03f5c42c(DAT_0918a408,&local_38);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      local_40 = System_Type__GetTypeHandle(uVar1,0);
      uVar1 = FUN_03f5c42c(DAT_0918a408,&local_40);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09172b38,0);
      System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_092113b8,uVar1,uVar2,0);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar2 = thunk_FUN_03f9944c();
    uVar1 = thunk_FUN_03fc39d4(&DAT_09209430);
    System_Runtime_Serialization_SerializationException___ctor(uVar2,uVar1,0);
  }
  uVar1 = thunk_FUN_03fc39d4(&DAT_091d8330);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar1);
}

