// rea decompile_all
// name: AnhPD.FoodOrder.LevelInfo$$WantsAutoFeed
// address: 0x41eea4c
// body: available
// range: 0x41eea4c-0x41eec97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41eec94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_LevelInfo__WantsAutoFeed(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  
  if ((DAT_09516b58 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b3d0);
    FUN_03f5c2a4(&DAT_0917b568);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b58 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x1d8))(param_2,param_3,*(undefined8 *)(*param_2 + 0x1e0));
    if ((uVar2 & 1) == 0) {
      return false;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    plVar7 = *(long **)(param_1 + 0x48);
    uVar6 = AnhPD_FoodOrder_CookingStation__ResultIdIfFed(param_2,param_3,0);
    if (plVar7 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar7 + 0x288))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x290));
      if ((uVar2 & 1) != 0) {
        return true;
      }
      plVar7 = (long *)param_2[0xb];
      if (plVar7 != (long *)0x0) {
        iVar8 = 0;
        do {
          lVar4 = *plVar7;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_0917b3d0) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_041eebb0;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b3d0,0);
LAB_041eebb0:
          iVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
          if (iVar1 <= iVar8) {
            return false;
          }
          lVar4 = *plVar7;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_0917b568) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_041eec14;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b568,0);
LAB_041eec14:
          lVar4 = (*(code *)*puVar3)(plVar7,iVar8,puVar3[1]);
          if (lVar4 == 0) break;
          uVar2 = AnhPD_FoodOrder_StationInteractGroup__AcceptsId(lVar4,param_3,0);
          if ((uVar2 & 1) != 0) {
            plVar9 = *(long **)(param_1 + 0x48);
            uVar6 = AnhPD_FoodOrder_CookingStation__ResultIdOfGroup(param_2,iVar8,0);
            if (plVar9 == (long *)0x0) break;
            uVar2 = (**(code **)(*plVar9 + 0x288))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x290));
            if ((uVar2 & 1) != 0) {
              return iVar8 < iVar1;
            }
          }
          iVar8 = iVar8 + 1;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

