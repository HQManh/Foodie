// rea decompile_all
// name: System.Security.Cryptography.MD5CryptoServiceProvider$$HashCore
// address: 0x74732cc
// body: available
// range: 0x74732cc-0x74733cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_MD5CryptoServiceProvider__HashCore
               (long param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  uVar2 = param_4;
  if (iVar1 != 0) {
    iVar3 = 0x40 - iVar1;
    uVar2 = param_4 - iVar3;
    if ((int)param_4 < iVar3) {
      System_Buffer__BlockCopy(param_2,param_3,*(undefined8 *)(param_1 + 0x40),iVar1,param_4,0);
      param_4 = *(int *)(param_1 + 0x48) + param_4;
      goto LAB_074733b4;
    }
    System_Buffer__BlockCopy(param_2,param_3,*(undefined8 *)(param_1 + 0x40),iVar1,iVar3,0);
    System_Security_Cryptography_MD5CryptoServiceProvider__ProcessBlock
              (param_1,*(undefined8 *)(param_1 + 0x40),0);
    param_3 = iVar3 + param_3;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  param_4 = uVar2 & 0x3f;
  if (-1 < (int)-uVar2) {
    param_4 = -(-uVar2 & 0x3f);
  }
  iVar1 = uVar2 - param_4;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      System_Security_Cryptography_MD5CryptoServiceProvider__ProcessBlock
                (param_1,param_2,param_3 + iVar3);
      iVar3 = iVar3 + 0x40;
    } while (iVar3 < iVar1);
  }
  if (param_4 == 0) {
    return;
  }
  System_Buffer__BlockCopy(param_2,iVar1 + param_3,*(undefined8 *)(param_1 + 0x40),0,param_4,0);
LAB_074733b4:
  *(uint *)(param_1 + 0x48) = param_4;
  return;
}

