// rea decompile_all
// name: thunk_FUN_03fabf60
// address: 0x3fc38ec
// body: available
// range: 0x3fc38ec-0x3fc38ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long thunk_FUN_03fabf60(long param_1,int param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  int aiStack_60 [3];
  undefined1 auStack_54 [16];
  int iStack_44;
  
  *param_4 = 0;
  if ((*(byte *)(param_1 + 0x53) & 3) == 2) {
    param_1 = FUN_03fc2a38();
  }
  lVar4 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_03f98b50(auStack_54,*(long *)(param_1 + 0x38),&DAT_0953522c);
    aiStack_60[0] = iStack_44 + param_2;
    iVar1 = *(int *)(DAT_09535220 + 0x58);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(DAT_09535220 + 0x54) / iVar1;
    }
    pvVar3 = bsearch(aiStack_60,(void *)(DAT_09535218 + *(int *)(DAT_09535220 + 0x50)),(long)iVar1,
                     (long)iVar2,FUN_03faffb4);
    lVar4 = 0;
    if (pvVar3 != (void *)0x0) {
      auVar7 = FUN_03f98c90(pvVar3,&DAT_0953522c);
      if (auVar7._0_8_ < 0xffffffff00000000) {
        uVar6 = *(undefined8 *)(*(long *)(DAT_09535208 + 0x38) + ((long)auVar7._0_8_ >> 0x20) * 8);
      }
      else {
        uVar6 = 0;
      }
      uVar5 = auVar7._8_8_ & 0xffffffff;
      *param_3 = uVar6;
      *param_4 = uVar5 == 0xffffffff;
      if (uVar5 == 0xffffffff) {
        lVar4 = 0;
      }
      else {
        lVar4 = DAT_09535218 + *(int *)(DAT_09535220 + 0x68) + uVar5;
      }
    }
  }
  return lVar4;
}

