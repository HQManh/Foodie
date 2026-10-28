// rea decompile_all
// name: AnhPD.FoodOrder.PastaPieceDisplay$$LateUpdate
// address: 0x415579c
// body: available
// range: 0x415579c-0x415589b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4155898 to 0x4155618 AnhPD.FoodOrder.PastaPieceDisplay$$ShowContainer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PastaPieceDisplay__LateUpdate(long param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_095164c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5650);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095164c0 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_04a6a6d8(param_1,DAT_091c5650);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar5);
  }
  if ((*(char *)(param_1 + 0x49) != '\0') &&
     (bVar1 = *(byte *)(param_1 + 0x4a),
     bVar2 = AnhPD_FoodOrder_PastaPieceDisplay__get_OnShelf(param_1), bVar1 != (bVar2 & 1))) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(param_1 + 0x50,0);
    AnhPD_FoodOrder_PastaPieceDisplay__ShowContainer(param_1,(uVar3 ^ 0xffffffff) & 1);
    return;
  }
  return;
}

