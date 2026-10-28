// rea decompile_all
// name: System.Buffer$$IndexOfByte
// address: 0x75e406c
// body: available
// range: 0x75e406c-0x75e418f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Buffer__IndexOfByte(long param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar7 = (uint *)(param_1 + param_3);
  param_2 = param_2 & 0xff;
  if (((ulong)puVar7 & 3) != 0) {
    puVar6 = puVar7;
    puVar7 = (uint *)(param_1 + param_3);
    do {
      puVar7 = (uint *)((long)puVar7 + 1);
      if (param_4 == 0) {
        return -1;
      }
      if ((byte)*puVar6 == param_2) {
        return param_3;
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
      puVar6 = puVar7;
    } while (((ulong)puVar7 & 3) != 0);
  }
  iVar3 = (int)param_1;
  if (3 < param_4) {
    iVar4 = param_4;
    do {
      uVar2 = *puVar7 ^ param_2 * 0x1010101;
      if (((uVar2 + 0x7efefeff ^ uVar2 ^ 0xffffffff) & 0x81010100) != 0) {
        if (param_2 == (*puVar7 & 0xff)) goto LAB_075e4160;
        iVar5 = (int)puVar7;
        if (*(byte *)((long)puVar7 + 1) == param_2) {
          return (iVar5 - iVar3) + 1;
        }
        if (*(byte *)((long)puVar7 + 2) == param_2) {
          return (iVar5 - iVar3) + 2;
        }
        if (*(byte *)((long)puVar7 + 3) == param_2) {
          return (iVar5 - iVar3) + 3;
        }
      }
      param_4 = iVar4 + -4;
      puVar7 = puVar7 + 1;
      bVar1 = 7 < iVar4;
      iVar4 = param_4;
    } while (bVar1);
  }
  if (0 < param_4) {
    param_4 = param_4 + 1;
    do {
      if ((byte)*puVar7 == param_2) {
LAB_075e4160:
        return (int)puVar7 - iVar3;
      }
      param_4 = param_4 + -1;
      puVar7 = (uint *)((long)puVar7 + 1);
    } while (1 < param_4);
  }
  return -1;
}

