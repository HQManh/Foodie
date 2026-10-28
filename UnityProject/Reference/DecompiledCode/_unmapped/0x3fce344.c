// rea decompile_all
// name: FUN_03fce344
// address: 0x3fce344
// body: available
// range: 0x3fce344-0x3fce453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fce344(long param_1,undefined8 param_2,ulong param_3,int param_4,byte param_5)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  uVar7 = param_3 >> 4;
  *(char *)(param_1 + 0x18) = (char)param_4;
  bVar1 = param_5 | 0x20;
  if (param_3 < 0x801) {
    bVar1 = param_5;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  iVar2 = *(int *)(&DAT_095156f8 + (long)param_4 * 0x20);
  lVar3 = (&DAT_095156f0)[(long)param_4 * 4];
  *(byte *)(param_1 + 0x19) = bVar1;
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar4 = param_3;
  }
  *(ulong *)(param_1 + 0x20) = param_3;
  *(ulong *)(param_1 + 0x28) = uVar4 + lVar3;
  iVar2 = FUN_03fcd05c(uVar7);
  if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0x1000;
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 0x20;
  }
  else {
    if ((*(byte *)(param_1 + 0x19) & 0x20) != 0) {
      uVar7 = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = (&DAT_0953acc0)[uVar7];
    if (*(ulong *)(param_1 + 0x20) < 0x801) {
      uVar7 = 0;
      if (*(ulong *)(param_1 + 0x20) != 0) {
        uVar7 = 0x1000 / *(ulong *)(param_1 + 0x20);
      }
      uVar7 = uVar7 * *(long *)(param_1 + 0x20) >> 4;
    }
    else {
      uVar7 = 0x100;
    }
    uVar4 = uVar7 >> 3 & 0x1fffffffffffff8;
    puVar6 = (undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    uVar5 = *(ulong *)((long)puVar6 + uVar4);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(ulong *)((long)puVar6 + uVar4) = uVar5 | 1L << (uVar7 & 0x3f);
    *(short *)(param_1 + 0x1a) = (short)DAT_09748118;
  }
  return;
}

