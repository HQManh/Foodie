// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleIceCream$$GetId
// address: 0x414857c
// body: available
// range: 0x414857c-0x414863f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleIceCream__GetId(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_09516431 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a70);
    DAT_09516431 = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0xfc) == 1) {
    uStack_58 = *(undefined8 *)(param_1 + 0x120);
    local_60 = *(undefined8 *)(param_1 + 0x118);
    local_50 = *(undefined8 *)(param_1 + 0x128);
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    if (*(int *)(DAT_09186a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_78 = uStack_58;
    local_80 = local_60;
    local_70 = local_50;
    AnhPD_FoodOrder_IceCreamScoopOrder__BuildId(uVar1,&local_80,uVar2);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x120);
    local_40 = *(undefined8 *)(param_1 + 0x118);
    local_30 = *(undefined8 *)(param_1 + 0x128);
    AnhPD_FoodOrder_FlexiblePieceId__Build(uVar1,&local_40,0);
  }
  return;
}

