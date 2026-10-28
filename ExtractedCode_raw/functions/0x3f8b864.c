// rea decompile_all
// name: FUN_03f8b864
// address: 0x3f8b864
// body: available
// range: 0x3f8b864-0x3f8b917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_03f8b864(long param_1,void *param_2,size_t param_3,int param_4,int *param_5,sockaddr *param_6,
            socklen_t *param_7)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  do {
    sVar2 = recvfrom(*(int *)(param_1 + 4),param_2,param_3,param_4,param_6,param_7);
    iVar1 = (int)sVar2;
    if (iVar1 != -1) {
      if (((param_3 == 0) || (iVar1 != 0)) || (*(int *)(param_1 + 0x18) == 1)) {
        *param_5 = iVar1;
        return 0;
      }
      puVar4 = (undefined4 *)__errno();
      *puVar4 = 4;
      break;
    }
    piVar3 = (int *)__errno();
  } while (*piVar3 == 4);
  FUN_03f8aea4(param_1);
  return 0xfffffffd;
}

