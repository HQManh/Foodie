// rea decompile_all
// name: System.Security.Cryptography.RijndaelManaged$$NewEncryptor
// address: 0x7462f98
// body: available
// range: 0x7462f98-0x746308b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Security_Cryptography_RijndaelManaged__NewEncryptor
          (long param_1,long param_2,undefined4 param_3,long param_4,undefined4 param_5,
          undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((DAT_0952119d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a310);
    DAT_0952119d = 1;
  }
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar1 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    param_2 = System_Security_Cryptography_Utils__GenerateRandom(iVar1 >> 3,0);
  }
  if (param_4 == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    param_4 = System_Security_Cryptography_Utils__GenerateRandom(iVar1 >> 3,0);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = thunk_FUN_03f9944c(DAT_0918a310);
  System_Security_Cryptography_RijndaelManagedTransform___ctor
            (uVar5,param_2,param_3,param_4,uVar3,param_5,uVar4,param_6);
  return uVar5;
}

