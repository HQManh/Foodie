// rea decompile_all
// name: AnhPD.FoodOrder.SushiOrderStrategy$$GetIdPieceOffer
// address: 0x416c9b4
// body: available
// range: 0x416c9b4-0x416cdcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416cc7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416cdb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416cdbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416cdc4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416cdc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0416cdc0) */

long AnhPD_FoodOrder_SushiOrderStrategy__GetIdPieceOffer(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long **pplStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  long local_38;
  
  if ((DAT_095165b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fc10);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a6f0);
    FUN_03f5c2a4(&DAT_0917add0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189150);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b670);
    DAT_095165b0 = 1;
  }
  local_38 = 0;
  local_48 = (long *)0x0;
  uStack_58 = 0;
  local_60 = 0;
  local_50 = 0;
  if (*(int *)(DAT_0918b670 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = AnhPD_FoodOrder_SushiOrderStrategy__get_Config();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Equality(lVar1,0,0);
  lVar5 = 0;
  if ((uVar2 & 1) == 0) {
    if ((lVar1 == 0) ||
       (plVar3 = (long *)AnhPD_FoodOrder_RecipeConfigSO__GetAllDishInfos(lVar1,0),
       plVar3 == (long *)0x0)) {
LAB_0416cdbc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917a6f0) {
          puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0416cb24;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a6f0,0);
LAB_0416cb24:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    pplStack_68 = &local_48;
    local_70 = 0;
    do {
      do {
        local_48 = plVar3;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar1 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0416cba8;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_0416cba8:
        uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        plVar3 = local_48;
        if ((uVar2 & 1) == 0) {
          lVar5 = 0;
          iVar7 = 6;
          goto LAB_0416ccdc;
        }
        if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar1 = *local_48;
        uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917add0) {
              puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0416cc0c;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_48,DAT_0917add0,0);
LAB_0416cc0c:
        lVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        plVar3 = local_48;
      } while ((lVar1 == 0) ||
              (uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar1 + 0x20),0),
              plVar3 = local_48, (uVar2 & 1) != 0));
      AnhPD_FoodOrder_FlexiblePieceId__PiecesOf(&local_88,*(undefined8 *)(lVar1 + 0x20),param_2,0);
      uStack_58 = uStack_80;
      local_60 = local_88;
      local_50 = local_78;
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_60,0);
      plVar3 = local_48;
    } while ((uVar2 & 1) != 0);
    lVar5 = thunk_FUN_03f9944c(DAT_09189150);
    AnhPD_FoodOrder_PieceOffer___ctor(lVar5,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar5 + 0x28) = 1;
    iVar7 = 5;
    *(undefined8 *)(lVar5 + 0x18) = uStack_58;
    *(undefined8 *)(lVar5 + 0x10) = local_60;
    *(undefined8 *)(lVar5 + 0x20) = local_50;
    *(undefined4 *)(lVar5 + 0x2c) = 0;
LAB_0416ccdc:
    plVar3 = local_48;
    if (local_48 != (long *)0x0) {
      lVar1 = *local_48;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185a58) {
            puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0416cd38;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185a58,0);
LAB_0416cd38:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    if ((iVar7 == 6) || (iVar7 == 0)) {
      lVar1 = AnhPD_FoodOrder_SushiOrderStrategy__get_IdOffers(param_1);
      if (param_2 == 0) {
        param_2 = **(long **)(DAT_09535468 + 0xb8);
      }
      if (lVar1 == 0) goto LAB_0416cdbc;
      uVar2 = FUN_06fd9fbc(lVar1,param_2,&local_38,DAT_0919fc10);
      lVar5 = local_38;
      if ((uVar2 & 1) == 0) {
        lVar5 = 0;
      }
    }
  }
  return lVar5;
}

