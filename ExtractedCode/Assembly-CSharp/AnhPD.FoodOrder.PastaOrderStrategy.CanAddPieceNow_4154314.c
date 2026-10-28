// rea decompile_all
// name: AnhPD.FoodOrder.PastaOrderStrategy$$CanAddPieceNow
// address: 0x4154314
// body: available
// range: 0x4154314-0x41543ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_PastaOrderStrategy__CanAddPieceNow
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_095164b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095164b5 = 1;
  }
  if (param_3 < 0x17) {
    iVar3 = 1;
    do {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_48,param_2,param_3,1,0);
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_58 = uStack_40;
      local_60 = local_48;
      local_50 = local_38;
      uVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__IsValid(iVar3,&local_60,0,0);
    } while (((uVar2 & 1) == 0) && (bVar1 = iVar3 != 4, iVar3 = iVar3 + 1, bVar1));
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}

