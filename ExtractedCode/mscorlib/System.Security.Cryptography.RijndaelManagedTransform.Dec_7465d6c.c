// rea decompile_all
// name: System.Security.Cryptography.RijndaelManagedTransform$$Dec
// address: 0x7465d6c
// body: available
// range: 0x7465d6c-0x7465f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_RijndaelManagedTransform__Dec
               (long param_1,int *param_2,uint *param_3,long param_4,long param_5,uint *param_6,
               uint *param_7)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  
  iVar7 = *(int *)(param_1 + 0x40);
  uVar3 = *(uint *)(param_1 + 0x44);
  uVar5 = iVar7 * uVar3;
  if (0 < (int)uVar3) {
    lVar8 = 0;
    puVar9 = param_6;
    do {
      iVar7 = (int)lVar8;
      lVar8 = lVar8 + 1;
      *puVar9 = param_3[(int)(uVar5 + iVar7)] ^ *puVar9;
      uVar3 = *(uint *)(param_1 + 0x44);
      puVar9 = puVar9 + 1;
    } while (lVar8 < (int)uVar3);
    iVar7 = *(int *)(param_1 + 0x40);
    uVar5 = uVar5 + (int)lVar8;
  }
  uVar10 = (ulong)uVar3;
  uVar6 = (ulong)uVar5;
  if (1 < iVar7) {
    iVar7 = 1;
    do {
      uVar5 = (int)uVar6 + (int)uVar10 * -2;
      uVar6 = (ulong)uVar5;
      if (0 < (int)uVar10) {
        lVar8 = 0;
        puVar9 = param_3 + (int)uVar5;
        puVar11 = param_7;
        puVar12 = param_6;
        piVar13 = param_2;
        do {
          iVar4 = *piVar13;
          piVar1 = piVar13 + (int)uVar10;
          lVar8 = lVar8 + 1;
          piVar2 = piVar13 + ((int)uVar10 << 1);
          piVar13 = piVar13 + 1;
          *puVar11 = *(uint *)(param_4 + ((ulong)(param_6[iVar4] >> 6) & 0x3fc) + 0x400) ^
                     *(uint *)(((ulong)*puVar12 & 0xff) * 4 + param_4) ^
                     *(uint *)(param_4 + ((ulong)(param_6[*piVar1] >> 0xe) & 0x3fc) + 0x800) ^
                     *(uint *)(param_4 + ((ulong)(param_6[*piVar2] >> 0x16) & 0x3fc) + 0xc00) ^
                     *puVar9;
          uVar10 = (ulong)*(int *)(param_1 + 0x44);
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar8 < (long)uVar10);
        uVar6 = lVar8 + (ulong)uVar5;
        if (0 < *(int *)(param_1 + 0x44)) {
          lVar8 = 0;
          puVar9 = param_6;
          puVar11 = param_7;
          do {
            lVar8 = lVar8 + 1;
            *puVar9 = *puVar11;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          } while (lVar8 < (int)*(uint *)(param_1 + 0x44));
          uVar10 = (ulong)*(uint *)(param_1 + 0x44);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x40));
  }
  if (0 < (int)uVar10) {
    lVar8 = 0;
    puVar9 = param_6;
    do {
      iVar7 = *param_2;
      piVar13 = param_2 + (int)uVar10;
      lVar8 = lVar8 + 1;
      piVar1 = param_2 + ((int)uVar10 << 1);
      param_2 = param_2 + 1;
      *param_7 = *(uint *)(param_5 + ((ulong)(param_6[iVar7] >> 6) & 0x3fc) + 0x400) ^
                 *(uint *)(((ulong)*puVar9 & 0xff) * 4 + param_5) ^
                 *(uint *)(param_5 + ((ulong)(param_6[*piVar13] >> 0xe) & 0x3fc) + 0x800) ^
                 *(uint *)(param_5 + ((ulong)(param_6[*piVar1] >> 0x16) & 0x3fc) + 0xc00) ^ *param_3
      ;
      uVar10 = (ulong)*(int *)(param_1 + 0x44);
      param_3 = param_3 + 1;
      param_7 = param_7 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar8 < (long)uVar10);
  }
  return;
}

