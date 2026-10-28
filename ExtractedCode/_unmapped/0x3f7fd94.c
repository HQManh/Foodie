// rea decompile_all
// name: ReadZStream
// address: 0x3f7fd94
// body: available
// range: 0x3f7fd94-0x3f7fe6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong ReadZStream(undefined8 *param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = 0xfffffff6;
  if (((param_1 != (undefined8 *)0x0) && (param_2 != 0)) && (-1 < param_3)) {
    if (*(char *)((long)param_1 + 0x21) == '\0') {
      puVar4 = (undefined8 *)*param_1;
      puVar4[3] = param_2;
      *(int *)(puVar4 + 4) = param_3;
      iVar2 = param_3;
      while (iVar2 != 0) {
        if (*(int *)(puVar4 + 1) == 0) {
          uVar1 = (*(code *)param_1[2])(param_1[1],0x1000,param_1[3]);
          iVar2 = *(int *)((long)param_1 + 0x24);
          uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
          *puVar4 = param_1[1];
          *(uint *)((long)param_1 + 0x24) = iVar2 + uVar1;
          *(uint *)(puVar4 + 1) = uVar1;
        }
        uVar3 = FUN_03fd8c5c(*param_1,2);
        iVar2 = (int)uVar3;
        if (iVar2 != 0) {
          if (iVar2 != 1) {
            if (iVar2 != -5) {
              return uVar3;
            }
            if (puVar4[2] != (ulong)*(uint *)((long)param_1 + 0x24)) {
              return 0xfffffffb;
            }
            if (*(int *)(puVar4 + 1) == 0) break;
          }
          *(undefined1 *)((long)param_1 + 0x21) = 1;
          break;
        }
        iVar2 = *(int *)(puVar4 + 4);
      }
      uVar3 = (ulong)(uint)(param_3 - *(int *)(puVar4 + 4));
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

