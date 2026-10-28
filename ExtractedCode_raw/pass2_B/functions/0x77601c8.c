// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$get_AvatarCount
// address: 0x77601c8
// body: available
// range: 0x77601c8-0x77602b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77602b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _GAME_Bridge_CookOrderBridge__get_AvatarCount(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  ulong local_18;
  
  if ((DAT_09522c2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b410);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    DAT_09522c2c = 1;
  }
  lVar2 = _GAME_Bridge_CookOrderBridge__get_CoreProfile();
  local_18 = 0;
  if ((lVar2 != 0) && (local_18 = 0, *(long *)(lVar2 + 0x28) != 0)) {
    plVar3 = (long *)CakeOrder_DataSO_PlayerAvatarCatalogSO__get_Entries(*(long *)(lVar2 + 0x28),0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917b410) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0776027c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b410,0);
LAB_0776027c:
    uVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    local_18 = 0;
    FUN_05c3078c(&local_18,uVar1,DAT_091b6f98);
    local_18 = local_18 >> 0x20;
  }
  return local_18;
}

