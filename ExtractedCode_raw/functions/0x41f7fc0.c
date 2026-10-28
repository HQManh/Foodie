// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$BeltOut
// address: 0x41f7fc0
// body: available
// range: 0x41f7fc0-0x41f80f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__BeltOut(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_44;
  
  if ((DAT_09516bab & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09193340);
    FUN_03f5c2a4(&DAT_091fc640);
    DAT_09516bab = 1;
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(DAT_09189140 + 0xb8);
  if (*(char *)(lVar2 + 0xa8) != '\0' && param_1 != 0) {
    if (param_2 == 2) {
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar2 = *(long *)(DAT_09189140 + 0xb8);
      }
      puVar3 = (undefined8 *)(lVar2 + 0x48);
    }
    else {
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar2 = *(long *)(DAT_09189140 + 0xb8);
      }
      puVar3 = (undefined8 *)(lVar2 + 0x40);
    }
    uVar4 = *puVar3;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceLedger__Bump(uVar4,uVar5,uVar1);
    local_44 = param_2;
    uVar4 = FUN_03f5c42c(DAT_09193340,&local_44);
    System_String__Format(DAT_091fc640,param_1,uVar4,0);
    AnhPD_FoodOrder_PieceLedger__Log();
  }
  return;
}

