// rea decompile_all
// name: AnhPD.FoodOrder.IngDirtyPlateCleaner$$TallestStackOnly
// address: 0x423e62c
// body: available
// range: 0x423e62c-0x423e7db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423e7d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_IngDirtyPlateCleaner__TallestStackOnly(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_09516e53 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183ce8);
    FUN_03f5c2a4(&DAT_0917b4d0);
    FUN_03f5c2a4(&DAT_091ac6e0);
    FUN_03f5c2a4(&DAT_091ac6d8);
    FUN_03f5c2a4(&DAT_0917c0b0);
    DAT_09516e53 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0917c0b0);
  FUN_057e0400(lVar2,DAT_091ac6d8);
  lVar3 = AnhPD_FoodOrder_IngDirtyPlateCleaner__TallestStackCell(param_1);
  if (lVar3 != 0) {
    plVar8 = *(long **)(lVar3 + 0x30);
    if (plVar8 == (long *)0x0) {
LAB_0423e7d8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b4d0) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0423e718;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b4d0,0);
LAB_0423e718:
    plVar8 = (long *)(*(code *)*puVar4)(plVar8,0,puVar4[1]);
    lVar3 = DAT_091ac6e0;
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(DAT_09183ce8 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_09183ce8 + 0x130) * 8 + -8) ==
          DAT_09183ce8)) {
        if (lVar2 != 0) {
          lVar5 = *(long *)(lVar2 + 0x10);
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar2 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar2 + 0x18) = uVar1 + 1;
              *(long **)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = plVar8;
              thunk_FUN_03f5d7b8();
              return lVar2;
            }
            FUN_057e0c68(lVar2,plVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            return lVar2;
          }
        }
        goto LAB_0423e7d8;
      }
    }
  }
  return lVar2;
}

