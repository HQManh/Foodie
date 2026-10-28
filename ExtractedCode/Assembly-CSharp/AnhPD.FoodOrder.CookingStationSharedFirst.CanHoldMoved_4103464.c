// rea decompile_all
// name: AnhPD.FoodOrder.CookingStationSharedFirst$$CanHoldMoved
// address: 0x4103464
// body: available
// range: 0x4103464-0x4103623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410361c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4103620 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_CookingStationSharedFirst__CanHoldMoved(long param_1,long param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  if ((DAT_0951617f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    DAT_0951617f = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(lVar3,DAT_091a8298);
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= param_3) {
LAB_04103620:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar5 = *(long *)(lVar5 + (long)(int)param_3 * 8 + 0x20);
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
      uVar2 = *(uint *)(lVar5 + 0x18);
      bVar1 = (int)uVar2 < 1;
      if ((int)uVar2 < 1) {
        return true;
      }
      uVar8 = 0;
LAB_04103538:
      if (uVar8 < uVar2) {
        lVar9 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x24) == '\0') goto LAB_041035e0;
          if ((param_2 != 0) && (lVar6 = *(long *)(param_2 + 0x10), lVar6 != 0)) {
            uVar7 = 0;
            do {
              if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar7) {
                return false;
              }
              if (lVar3 == 0) break;
              uVar4 = FUN_053d750c(lVar3,uVar7 & 0xffffffff,DAT_091a82c0);
              if ((uVar4 & 1) == 0) {
                lVar6 = *(long *)(param_2 + 0x10);
                if (lVar6 == 0) break;
                if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_04103620;
                lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
                if (lVar6 == 0) break;
                uVar4 = System_String__op_Equality
                                  (*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar9 + 0x10),0);
                if ((uVar4 & 1) != 0) goto LAB_041035cc;
              }
              lVar6 = *(long *)(param_2 + 0x10);
              uVar7 = uVar7 + 1;
              if (lVar6 == 0) break;
            } while( true );
          }
        }
        goto LAB_0410361c;
      }
      goto LAB_04103620;
    }
  }
LAB_0410361c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_041035cc:
  if ((int)uVar7 < 0) {
    return bVar1;
  }
  FUN_053d8048(lVar3,uVar7 & 0xffffffff,DAT_091a82b0);
LAB_041035e0:
  uVar2 = *(uint *)(lVar5 + 0x18);
  uVar8 = uVar8 + 1;
  bVar1 = (int)uVar2 <= (int)uVar8;
  if ((int)uVar2 <= (int)uVar8) {
    return true;
  }
  goto LAB_04103538;
}

