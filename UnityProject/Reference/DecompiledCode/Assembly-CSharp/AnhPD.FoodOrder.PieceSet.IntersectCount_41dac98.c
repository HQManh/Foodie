// rea decompile_all
// name: AnhPD.FoodOrder.PieceSet$$IntersectCount
// address: 0x41dac98
// body: available
// range: 0x41dac98-0x41dadd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_PieceSet__IntersectCount(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((DAT_09516ab1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516ab1 = 1;
  }
  uVar6 = *param_1;
  uVar7 = *param_2;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar3 = 0;
  if ((uVar6 != 0) && (uVar7 != 0)) {
    iVar3 = 0;
    do {
      iVar4 = (int)(uVar6 & 0xf);
      if ((uVar7 & 0xf) <= (uVar6 & 0xf)) {
        iVar4 = (int)(uVar7 & 0xf);
      }
      iVar3 = iVar3 + iVar4;
      if (uVar6 < 0x10) break;
      uVar6 = uVar6 >> 4;
      bVar1 = 0xf < uVar7;
      uVar7 = uVar7 >> 4;
    } while (bVar1);
  }
  uVar7 = param_1[1];
  iVar4 = 0;
  if ((uVar7 != 0) && (param_2[1] != 0)) {
    iVar4 = 0;
    uVar6 = param_2[1];
    do {
      iVar5 = (int)(uVar7 & 0xf);
      if ((uVar6 & 0xf) <= (uVar7 & 0xf)) {
        iVar5 = (int)(uVar6 & 0xf);
      }
      iVar4 = iVar4 + iVar5;
      if (uVar7 < 0x10) break;
      uVar7 = uVar7 >> 4;
      bVar1 = 0xf < uVar6;
      uVar6 = uVar6 >> 4;
    } while (bVar1);
  }
  uVar7 = param_1[2];
  iVar5 = 0;
  if ((uVar7 != 0) && (param_2[2] != 0)) {
    iVar5 = 0;
    uVar6 = param_2[2];
    do {
      iVar2 = (int)(uVar7 & 0xf);
      if ((uVar6 & 0xf) <= (uVar7 & 0xf)) {
        iVar2 = (int)(uVar6 & 0xf);
      }
      iVar5 = iVar5 + iVar2;
      if (uVar7 < 0x10) break;
      uVar7 = uVar7 >> 4;
      bVar1 = 0xf < uVar6;
      uVar6 = uVar6 >> 4;
    } while (bVar1);
  }
  return iVar4 + iVar3 + iVar5;
}

