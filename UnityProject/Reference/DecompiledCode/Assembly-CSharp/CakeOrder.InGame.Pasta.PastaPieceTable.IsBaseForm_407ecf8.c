// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaPieceTable$$IsBaseForm
// address: 0x407ecf8
// body: available
// range: 0x407ecf8-0x407ee27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407ee04 to 0x407ec94 CakeOrder.InGame.Pasta.PastaPieceTable$$Contains (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong CakeOrder_InGame_Pasta_PastaPieceTable__IsBaseForm(int param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09515c57 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f10);
    DAT_09515c57 = 1;
  }
  if (param_1 < 3) {
    if (param_1 == 1) {
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__Contains
                        (*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 8),param_2);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__Contains
                          (*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x10),param_2);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = *(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x18);
          goto LAB_0407edf8;
        }
      }
      return 1;
    }
    if (param_1 != 2) {
      return 1;
    }
    bVar1 = param_2 == 7;
  }
  else {
    if (param_1 == 3) {
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = *(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x38);
LAB_0407edf8:
      uVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__Contains(uVar3,param_2);
      return uVar2;
    }
    if (param_1 != 4) {
      return 1;
    }
    bVar1 = (param_2 & 0xfffffffd) == 0x10;
  }
  return (ulong)bVar1;
}

