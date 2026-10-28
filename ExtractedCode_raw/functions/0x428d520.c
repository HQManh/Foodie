// rea decompile_all
// name: CakeOrder.InGame.OrderRecipeCodec$$Contains
// address: 0x428d520
// body: available
// range: 0x428d520-0x428d5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_InGame_OrderRecipeCodec__Contains(short *param_1,int param_2,short param_3)

{
  short *psVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  if ((DAT_0951717f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_0951717f = 1;
  }
  if (param_2 < 1) {
    bVar2 = false;
  }
  else if (*param_1 == param_3) {
    bVar2 = true;
  }
  else {
    lVar4 = 1;
    do {
      iVar3 = (int)lVar4;
      if (param_2 == iVar3) break;
      psVar1 = param_1 + lVar4;
      lVar4 = lVar4 + 1;
    } while (*psVar1 != param_3);
    bVar2 = iVar3 < param_2;
  }
  return bVar2;
}

