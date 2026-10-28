// rea decompile_all
// name: System.Security.Cryptography.HashAlgorithm$$TransformFinalBlock
// address: 0x745dda0
// body: available
// range: 0x745dda0-0x745dee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Security_Cryptography_HashAlgorithm__TransformFinalBlock
          (long *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0952115f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c00c8);
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_0952115f = 1;
  }
  System_Security_Cryptography_HashAlgorithm__ValidateTransformBlock
            (param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x238))(param_1,param_2,param_3,param_4,*(undefined8 *)(*param_1 + 0x240))
  ;
  lVar1 = System_Security_Cryptography_HashAlgorithm__CaptureHashCodeAndReinitialize(param_1);
  param_1[3] = lVar1;
  thunk_FUN_03f5d7b8();
  lVar1 = DAT_091c00c8;
  if (param_4 == 0) {
    lVar3 = *(long *)(DAT_091c00c8 + 0x38);
    if (lVar3 == 0) {
      FUN_03f95ac8(DAT_091c00c8);
      lVar3 = *(long *)(lVar1 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    uVar2 = **(undefined8 **)(lVar1 + 0xb8);
  }
  else {
    uVar2 = FUN_03f5c394(DAT_0917fc88,param_4);
    System_Buffer__BlockCopy(param_2,param_3,uVar2,0,param_4,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return uVar2;
}

