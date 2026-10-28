// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$GetAvatarId
// address: 0x77602b8
// body: available
// range: 0x77602b8-0x77603ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_Bridge_CookOrderBridge__GetAvatarId(int param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_09522c2d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b410);
    FUN_03f5c2a4(&DAT_0917b5a8);
    DAT_09522c2d = 1;
  }
  lVar2 = _GAME_Bridge_CookOrderBridge__get_CoreProfile();
  uVar4 = 0;
  if ((lVar2 != 0) && (uVar4 = 0, *(long *)(lVar2 + 0x28) != 0)) {
    plVar3 = (long *)CakeOrder_DataSO_PlayerAvatarCatalogSO__get_Entries(*(long *)(lVar2 + 0x28),0);
    uVar4 = 0;
    if ((-1 < param_1) && (plVar3 != (long *)0x0)) {
      lVar2 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b410) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0776036c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b410,0);
LAB_0776036c:
      iVar1 = (*(code *)*puVar5)(plVar3,puVar5[1]);
      if (param_1 < iVar1) {
        lVar2 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917b5a8) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_077603dc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b5a8,0);
LAB_077603dc:
        lVar2 = (*(code *)*puVar5)(plVar3,param_1,puVar5[1]);
        uVar4 = 0;
        if (lVar2 != 0) {
          uVar4 = *(undefined8 *)(lVar2 + 0x10);
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

