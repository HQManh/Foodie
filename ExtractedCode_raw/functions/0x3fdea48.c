// rea decompile_all
// name: FUN_03fdea48
// address: 0x3fdea48
// body: available
// range: 0x3fdea48-0x3fdeb4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fdea48(long param_1,long param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  
  uVar5 = param_3 * 2;
  iVar8 = *(int *)(param_1 + 0x14b4);
  iVar1 = *(int *)(param_1 + (ulong)param_3 * 4 + 0xbc0);
  if ((int)uVar5 <= iVar8) {
    do {
      uVar6 = uVar5;
      if ((int)uVar5 < iVar8) {
        uVar9 = (ulong)(int)uVar5;
        lVar7 = (long)*(int *)(param_1 + 0xbc0 + (uVar9 | 1) * 4);
        lVar4 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar5 * 4);
        uVar2 = *(ushort *)(param_2 + lVar7 * 4);
        uVar3 = *(ushort *)(param_2 + lVar4 * 4);
        if ((uVar2 < uVar3) ||
           ((uVar2 == uVar3 &&
            (*(byte *)(param_1 + 0x14bc + lVar7) <= *(byte *)(param_1 + 0x14bc + lVar4))))) {
          uVar9 = uVar9 | 1;
          uVar6 = uVar5 | 1;
        }
      }
      else {
        uVar9 = (ulong)(int)uVar5;
      }
      uVar2 = *(ushort *)(param_2 + (long)iVar1 * 4);
      uVar5 = *(uint *)(param_1 + uVar9 * 4 + 0xbc0);
      uVar3 = *(ushort *)
               (param_2 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2));
      if ((uVar2 < uVar3) ||
         ((uVar2 == uVar3 &&
          (*(byte *)(param_1 + iVar1 + 0x14bc) <= *(byte *)(param_1 + (int)uVar5 + 0x14bc)))))
      break;
      *(uint *)(param_1 + (long)(int)param_3 * 4 + 0xbc0) = uVar5;
      uVar5 = uVar6 * 2;
      iVar8 = *(int *)(param_1 + 0x14b4);
      param_3 = uVar6;
    } while ((int)uVar5 <= iVar8);
  }
  *(int *)(param_1 + (long)(int)param_3 * 4 + 0xbc0) = iVar1;
  return;
}

