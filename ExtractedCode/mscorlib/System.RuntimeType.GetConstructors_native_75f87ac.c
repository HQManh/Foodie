// rea decompile_all
// name: thunk_FUN_03f6c7e0
// address: 0x75f87ac
// body: available
// range: 0x75f87ac-0x75f87af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f6c7e0(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  char *__s1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0xb) >> 5 & 1) == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_03f66604(&uStack_58,4);
    uStack_38 = 0;
    uVar3 = FUN_03fbe574(*(undefined8 *)(param_1 + 0x10),1);
    uStack_38 = 0;
    while (lVar4 = FUN_03fbee74(uVar3,&uStack_38), lVar4 != 0) {
      __s1 = *(char **)(lVar4 + 0x18);
      iVar2 = strcmp(__s1,".ctor");
      if ((iVar2 == 0) || (iVar2 = strcmp(__s1,".cctor"), iVar2 == 0)) {
        if ((*(ushort *)(lVar4 + 0x4c) & 7) == 6) {
          uVar1 = param_2 >> 4;
        }
        else {
          uVar1 = param_2 >> 5;
        }
        if ((uVar1 & 1) != 0) {
          if ((*(ushort *)(lVar4 + 0x4c) >> 4 & 1) == 0) {
            uVar1 = param_2 >> 2;
          }
          else {
            uVar1 = param_2 >> 3;
          }
          if ((uVar1 & 1) != 0) {
            plVar5 = (long *)FUN_03f665b8(&uStack_58);
            *plVar5 = lVar4;
          }
        }
      }
    }
    uVar3 = FUN_03f8fd50(&uStack_58);
    FUN_03f6521c(&uStack_58);
  }
  else {
    uVar3 = FUN_03f8fda8();
  }
  return uVar3;
}

