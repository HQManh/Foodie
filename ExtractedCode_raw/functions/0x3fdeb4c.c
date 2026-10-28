// rea decompile_all
// name: FUN_03fdeb4c
// address: 0x3fdeb4c
// body: available
// range: 0x3fdeb4c-0x3fdec57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fdeb4c(long param_1,long param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  uVar6 = param_3 + 1;
  uVar2 = *(ushort *)(param_2 + 2);
  *(undefined2 *)(param_2 + (long)(int)uVar6 * 4 + 2) = 0xffff;
  if (-1 < param_3) {
    iVar5 = 3;
    if (uVar2 != 0) {
      iVar5 = 4;
    }
    iVar12 = 0;
    iVar9 = 0x8a;
    if (uVar2 != 0) {
      iVar9 = 7;
    }
    if ((int)uVar6 < 2) {
      uVar6 = 1;
    }
    uVar8 = (ulong)uVar6;
    uVar4 = 0xffffffff;
    puVar10 = (ushort *)(param_2 + 6);
    do {
      uVar7 = (ulong)uVar2;
      iVar13 = iVar12 + 1;
      uVar3 = *puVar10;
      uVar6 = (uint)uVar3;
      uVar11 = (uint)uVar2;
      if ((iVar9 <= iVar13) || (uVar11 != uVar6)) {
        if (iVar13 < iVar5) {
          lVar1 = param_1 + uVar7 * 4;
          *(short *)(lVar1 + 0xabc) = *(short *)(lVar1 + 0xabc) + (short)iVar13;
        }
        else if (uVar11 == 0) {
          if (iVar12 < 10) {
            *(short *)(param_1 + 0xb00) = *(short *)(param_1 + 0xb00) + 1;
          }
          else {
            *(short *)(param_1 + 0xb04) = *(short *)(param_1 + 0xb04) + 1;
          }
        }
        else {
          if (uVar11 != (uint)uVar4) {
            lVar1 = param_1 + uVar7 * 4;
            *(short *)(lVar1 + 0xabc) = *(short *)(lVar1 + 0xabc) + 1;
          }
          *(short *)(param_1 + 0xafc) = *(short *)(param_1 + 0xafc) + 1;
        }
        iVar13 = 0;
        uVar4 = uVar7;
        if (uVar6 == 0) {
          iVar5 = 3;
          iVar9 = 0x8a;
        }
        else {
          iVar9 = 6;
          if (uVar11 != uVar6) {
            iVar9 = 7;
          }
          iVar5 = 3;
          if (uVar11 != uVar6) {
            iVar5 = 4;
          }
        }
      }
      iVar12 = iVar13;
      uVar8 = uVar8 - 1;
      puVar10 = puVar10 + 2;
      uVar2 = uVar3;
    } while (uVar8 != 0);
  }
  return;
}

