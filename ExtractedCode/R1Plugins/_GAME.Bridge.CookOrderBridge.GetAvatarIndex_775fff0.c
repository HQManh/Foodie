// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$GetAvatarIndex
// address: 0x775fff0
// body: available
// range: 0x775fff0-0x77601c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77601c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _GAME_Bridge_CookOrderBridge__GetAvatarIndex(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  
  if ((DAT_09522c2e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b410);
    FUN_03f5c2a4(&DAT_0917b5a8);
    DAT_09522c2e = 1;
  }
  lVar2 = _GAME_Bridge_CookOrderBridge__get_CoreProfile();
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x28) == 0)) ||
      (plVar3 = (long *)CakeOrder_DataSO_PlayerAvatarCatalogSO__get_Entries
                                  (*(long *)(lVar2 + 0x28),0), plVar3 == (long *)0x0)) ||
     (uVar4 = System_String__IsNullOrEmpty(param_1,0), (uVar4 & 1) != 0)) {
    return -1;
  }
  iVar7 = 0;
  do {
    lVar2 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917b410) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_077600d4;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b410,0);
LAB_077600d4:
    iVar1 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    if (iVar1 <= iVar7) {
      return -1;
    }
    lVar2 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917b5a8) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07760134;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b5a8,0);
LAB_07760134:
    lVar2 = (*(code *)*puVar5)(plVar3,iVar7,puVar5[1]);
    if (lVar2 != 0) {
      lVar2 = *plVar3;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b5a8) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07760194;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b5a8,0);
LAB_07760194:
      lVar2 = (*(code *)*puVar5)(plVar3,iVar7,puVar5[1]);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = System_String__op_Equality(*(undefined8 *)(lVar2 + 0x10),param_1,0);
      if ((uVar4 & 1) != 0) {
        return iVar7;
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

