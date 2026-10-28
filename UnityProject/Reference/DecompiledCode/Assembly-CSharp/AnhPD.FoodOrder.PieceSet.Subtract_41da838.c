// rea decompile_all
// name: AnhPD.FoodOrder.PieceSet$$Subtract
// address: 0x41da838
// body: available
// range: 0x41da838-0x41da9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceSet__Subtract(ulong *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((DAT_09516aad & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516aad = 1;
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = *param_3;
    if ((param_3[1] != 0 || param_3[2] != 0) || uVar10 != 0) {
      uVar11 = *param_2;
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((uVar10 != 0) && (uVar11 != 0)) {
        uVar6 = 0;
        uVar4 = 0;
        uVar5 = uVar11;
        do {
          uVar7 = uVar10 & 0xf;
          uVar10 = uVar10 >> 4;
          lVar3 = (uVar5 & 0xf) - uVar7;
          uVar2 = uVar4 & 0x3c;
          uVar4 = uVar4 + 4;
          uVar11 = lVar3 << uVar2;
          if (lVar3 == 0 || (uVar5 & 0xf) < uVar7) {
            uVar11 = 0;
          }
          uVar6 = uVar11 | uVar6;
          bVar1 = 0xf < uVar5;
          uVar11 = uVar6;
          uVar5 = uVar5 >> 4;
        } while (bVar1);
      }
      uVar5 = param_2[1];
      uVar10 = uVar5;
      if ((uVar5 != 0) && (uVar6 = param_3[1], uVar6 != 0)) {
        uVar10 = 0;
        uVar4 = 0;
        do {
          uVar8 = uVar6 & 0xf;
          uVar6 = uVar6 >> 4;
          lVar3 = (uVar5 & 0xf) - uVar8;
          uVar2 = uVar4 & 0x3c;
          uVar4 = uVar4 + 4;
          uVar7 = lVar3 << uVar2;
          if (lVar3 == 0 || (uVar5 & 0xf) < uVar8) {
            uVar7 = 0;
          }
          uVar10 = uVar7 | uVar10;
          bVar1 = 0xf < uVar5;
          uVar5 = uVar5 >> 4;
        } while (bVar1);
      }
      uVar5 = param_2[2];
      uVar6 = uVar5;
      if ((uVar5 != 0) && (uVar7 = param_3[2], uVar7 != 0)) {
        uVar6 = 0;
        uVar4 = 0;
        do {
          uVar9 = uVar7 & 0xf;
          uVar7 = uVar7 >> 4;
          lVar3 = (uVar5 & 0xf) - uVar9;
          uVar2 = uVar4 & 0x3c;
          uVar4 = uVar4 + 4;
          uVar8 = lVar3 << uVar2;
          if (lVar3 == 0 || (uVar5 & 0xf) < uVar9) {
            uVar8 = 0;
          }
          uVar6 = uVar8 | uVar6;
          bVar1 = 0xf < uVar5;
          uVar5 = uVar5 >> 4;
        } while (bVar1);
      }
      *param_1 = uVar11;
      param_1[1] = uVar10;
      param_1[2] = uVar6;
      return;
    }
  }
  uVar11 = *param_2;
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[2] = uVar10;
  return;
}

