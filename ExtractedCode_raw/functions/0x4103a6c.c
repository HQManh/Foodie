// rea decompile_all
// name: AnhPD.FoodOrder.CookingStationSharedFirst$$Regroup
// address: 0x4103a6c
// body: available
// range: 0x4103a6c-0x4103cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4103cb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4103cbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4103cc0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4103cc4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CookingStationSharedFirst__Regroup(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09516181 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091b05a8);
    DAT_09516181 = 1;
  }
  lVar7 = *(long *)(param_1 + 0xa0);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (lVar7 != 0) {
    iVar3 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar3) {
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar3,0);
    }
    lVar7 = *(long *)(param_1 + 0x58);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= param_2) {
LAB_04103cc4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar7 = *(long *)(lVar7 + (long)(int)param_2 * 8 + 0x20);
      if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar1) {
          uVar11 = 0;
          do {
            lVar2 = DAT_091b0570;
            if (uVar1 <= uVar11) goto LAB_04103cc4;
            lVar8 = *(long *)(lVar7 + (long)(int)uVar11 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_04103cb8;
            if (*(char *)(lVar8 + 0x24) != '\0') {
              lVar4 = *(long *)(param_1 + 0xa0);
              if (lVar4 == 0) goto LAB_04103cb8;
              lVar10 = *(long *)(lVar4 + 0x10);
              uVar6 = *(undefined8 *)(lVar8 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_04103cb8;
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                puVar9 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                *puVar9 = uVar6;
                thunk_FUN_03f5d7b8(puVar9);
              }
              else {
                FUN_057e0c68(lVar4,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar1 = *(uint *)(lVar7 + 0x18);
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)uVar1);
        }
        lVar7 = *(long *)(param_1 + 0x58);
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= param_2) goto LAB_04103cc4;
          if (*(long *)(lVar7 + (long)(int)param_2 * 8 + 0x20) != 0) {
            AnhPD_FoodOrder_StationInteractGroup__OnComplete();
            if (*(long *)(param_1 + 0xa0) != 0) {
              FUN_057e185c(&local_58,*(long *)(param_1 + 0xa0),DAT_091b05a8);
              while( true ) {
                uVar5 = FUN_071bd28c(&local_58,DAT_091a45a0);
                if ((uVar5 & 1) == 0) {
                  FUN_071bd288(&local_58,DAT_091a4598);
                  return;
                }
                lVar7 = *(long *)(param_1 + 0x58);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                iVar3 = AnhPD_FoodOrder_CookingStationSharedFirst__FreeSlotOf
                                  (*(undefined8 *)(lVar7 + (long)(int)param_3 * 8 + 0x20),local_48);
                if (-1 < iVar3) {
                  AnhPD_FoodOrder_CookingStation__PutInIngredient(param_1,CONCAT44(iVar3,param_3));
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
        }
      }
    }
  }
LAB_04103cb8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

