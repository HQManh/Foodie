// rea decompile_all
// name: AnhPD.FoodOrder.IngCellStatus$$UnlockColorWithKey
// address: 0x423254c
// body: available
// range: 0x423254c-0x42327b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423270c to 0x40b44ac AnhPD.FoodOrder.KeyObject$$FlyTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4232764 to 0x40b4658 AnhPD.FoodOrder.KeyObject$$Despawn (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42327ac to 0x42433b8 AnhPD.FoodOrder.IngCellStatus$$OnKeyLanded (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42327b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngCellStatus__UnlockColorWithKey
               (undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_09516e49 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091eb928);
    FUN_03f5c2a4(&DAT_09191718);
    DAT_09516e49 = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09191718);
  System_Object___ctor(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_3;
    thunk_FUN_03f5d7b8((long *)(lVar5 + 0x10),param_3);
    if (param_4 == 0) {
      return;
    }
    lVar6 = AnhPD_FoodOrder_IngCellStatus__TakeColorLock(param_3,*(undefined4 *)(param_4 + 0x10));
    if (lVar6 == 0) {
      uVar10 = *(undefined8 *)(param_4 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = UnityEngine_Object__op_Implicit(uVar10,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (*(long *)(param_4 + 0x18) != 0) {
        AnhPD_FoodOrder_KeyObject__Despawn(*(long *)(param_4 + 0x18),0);
        return;
      }
    }
    else {
      lVar8 = *(long *)(param_3 + 0x10);
      if (lVar8 != 0) {
        iVar1 = *(int *)(lVar8 + 0x20);
        iVar2 = *(int *)(lVar8 + 0x24);
        iVar3 = *(int *)(lVar6 + 0x10);
        fVar11 = (float)AnhPD_FoodOrder_IngGridLayout__get_Origin(lVar8);
        fVar12 = *(float *)(lVar8 + 0x18);
        fVar13 = *(float *)(lVar8 + 0x1c);
        plVar9 = (long *)(lVar5 + 0x18);
        *plVar9 = lVar6;
        thunk_FUN_03f5d7b8(plVar9,lVar6);
        uVar10 = *(undefined8 *)(param_4 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(uVar10,0);
        if ((uVar7 & 1) == 0) {
          AnhPD_FoodOrder_IngCellStatus__OnKeyLanded(param_3,*plVar9);
          return;
        }
        plVar9 = (long *)(lVar5 + 0x20);
        *plVar9 = *(long *)(param_4 + 0x18);
        thunk_FUN_03f5d7b8(plVar9);
        lVar6 = *plVar9;
        uVar10 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar10,lVar5,DAT_091eb928,0);
        if (lVar6 != 0) {
          uVar4 = 0;
          if (iVar1 != 0) {
            uVar4 = iVar3 / iVar1;
          }
          AnhPD_FoodOrder_KeyObject__FlyTo
                    (fVar11 + ((float)(int)(iVar3 - uVar4 * iVar1) + 0.5) * fVar12,
                     param_2 + ((float)(int)(iVar2 + ~uVar4) + 0.5) * fVar13,0,0x3f800000,lVar6,
                     uVar10,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

