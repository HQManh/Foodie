// rea decompile_all
// name: System.Security.Cryptography.RijndaelManagedTransform$$Enc
// address: 0x7465b9c
// body: available
// range: 0x7465b9c-0x7465d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_RijndaelManagedTransform__Enc
               (long param_1,int *param_2,uint *param_3,long param_4,long param_5,uint *param_6,
               uint *param_7)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  
  uVar3 = *(uint *)(param_1 + 0x44);
  if (0 < (int)uVar3) {
    lVar5 = 0;
    puVar6 = param_3;
    puVar8 = param_6;
    do {
      lVar5 = lVar5 + 1;
      *puVar8 = *puVar6 ^ *puVar8;
      uVar3 = *(uint *)(param_1 + 0x44);
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar5 < (int)uVar3);
  }
  uVar9 = (ulong)uVar3;
  param_3 = param_3 + (int)uVar3;
  if (1 < *(int *)(param_1 + 0x40)) {
    iVar7 = 1;
    do {
      if (0 < (int)uVar9) {
        lVar5 = 0;
        puVar6 = param_3;
        puVar8 = param_7;
        puVar10 = param_6;
        piVar11 = param_2;
        do {
          iVar4 = *piVar11;
          piVar1 = piVar11 + (int)uVar9;
          lVar5 = lVar5 + 1;
          piVar2 = piVar11 + ((int)uVar9 << 1);
          piVar11 = piVar11 + 1;
          param_3 = puVar6 + 1;
          *puVar8 = *(uint *)(param_4 + ((ulong)(param_6[iVar4] >> 6) & 0x3fc) + 0x400) ^
                    *(uint *)(((ulong)*puVar10 & 0xff) * 4 + param_4) ^
                    *(uint *)(param_4 + ((ulong)(param_6[*piVar1] >> 0xe) & 0x3fc) + 0x800) ^
                    *(uint *)(param_4 + ((ulong)(param_6[*piVar2] >> 0x16) & 0x3fc) + 0xc00) ^
                    *puVar6;
          uVar9 = (ulong)*(int *)(param_1 + 0x44);
          puVar6 = param_3;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar5 < (long)uVar9);
        if (0 < *(int *)(param_1 + 0x44)) {
          lVar5 = 0;
          puVar6 = param_6;
          puVar8 = param_7;
          do {
            lVar5 = lVar5 + 1;
            *puVar6 = *puVar8;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (lVar5 < (int)*(uint *)(param_1 + 0x44));
          uVar9 = (ulong)*(uint *)(param_1 + 0x44);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x40));
  }
  if (0 < (int)uVar9) {
    lVar5 = 0;
    puVar6 = param_6;
    do {
      iVar7 = *param_2;
      piVar11 = param_2 + (int)uVar9;
      lVar5 = lVar5 + 1;
      piVar1 = param_2 + ((int)uVar9 << 1);
      param_2 = param_2 + 1;
      *param_7 = *(uint *)(param_5 + ((ulong)(param_6[iVar7] >> 6) & 0x3fc) + 0x400) ^
                 *(uint *)(((ulong)*puVar6 & 0xff) * 4 + param_5) ^
                 *(uint *)(param_5 + ((ulong)(param_6[*piVar11] >> 0xe) & 0x3fc) + 0x800) ^
                 *(uint *)(param_5 + ((ulong)(param_6[*piVar1] >> 0x16) & 0x3fc) + 0xc00) ^ *param_3
      ;
      uVar9 = (ulong)*(int *)(param_1 + 0x44);
      param_7 = param_7 + 1;
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar5 < (long)uVar9);
  }
  return;
}

