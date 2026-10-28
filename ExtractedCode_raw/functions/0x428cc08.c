// rea decompile_all
// name: CakeOrder.InGame.CustomerScheduleBuilder$$ComposeDishFromPieces
// address: 0x428cc08
// body: available
// range: 0x428cc08-0x428cfdb inclusive
// range: 0x428d024-0x428d083 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428cf9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428cfd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428cfd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428cfd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428d080 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_CustomerScheduleBuilder__ComposeDishFromPieces
               (long param_1,long param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined8 local_80;
  long **pplStack_78;
  long *local_70;
  undefined8 local_68;
  
  if ((DAT_0951717b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183bb0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ada20);
    FUN_03f5c2a4(&DAT_091adc80);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951717b = 1;
  }
  local_70 = (long *)0x0;
  local_68 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(param_2,0,0);
    if ((param_3 != (long *)0x0) && ((uVar4 & 1) == 0)) {
      lVar9 = *param_3;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b378) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0428cd80;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b378,0);
LAB_0428cd80:
      iVar2 = (*(code *)*puVar5)(param_3,puVar5[1]);
      if (iVar2 != 0) {
        if (param_1 == 0) {
LAB_0428d080:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar9 != 0)) {
          uVar3 = FUN_039afee4(0,DAT_0917b378,param_3);
          lVar6 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796990(lVar6,uVar3,DAT_091adc80);
          plVar7 = (long *)FUN_039afee4(0,DAT_0917a5c0,param_3);
          pplStack_78 = &local_70;
          local_80 = 0;
          do {
            local_70 = plVar7;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = *plVar7;
            uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar4 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0428ce7c;
                }
                uVar4 = uVar4 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_0428ce7c:
            uVar4 = (*(code *)*puVar5)(plVar7,puVar5[1]);
            plVar7 = local_70;
            if ((uVar4 & 1) == 0) {
              FUN_039aeef4(&local_80);
              uVar4 = CookingGraph_CompositeStructureTranslator__TryTranslate
                                (param_1,lVar6,&local_68,param_4,0);
              if ((uVar4 & 1) == 0) {
                return 0;
              }
              lVar9 = thunk_FUN_03f9944c(DAT_09183bb0);
              CookingGraph_DishOrderData___ctor(lVar9,0);
              if (lVar9 != 0) {
                *(undefined8 *)(lVar9 + 0x10) = local_68;
                thunk_FUN_03f5d7b8();
                return lVar9;
              }
              goto LAB_0428d080;
            }
            if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = *local_70;
            uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar4 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_0917ac88) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0428cee0;
                }
                uVar4 = uVar4 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917ac88,0);
LAB_0428cee0:
            uVar4 = (*(code *)*puVar5)(plVar7,puVar5[1]);
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550(uVar4,uVar4 & 0xffffffff);
            }
            uVar8 = CakeOrder_MapIngredientLookupTable__GetServableNodeByRecipePiece
                              (param_2,uVar4 & 0xffffffff,0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Equality(uVar8,0,0);
            if (((uVar4 & 1) != 0) ||
               (iVar2 = FUN_057e1a08(lVar9,uVar8,DAT_091ada20), lVar10 = DAT_091adc88, iVar2 < 0)) {
              FUN_039aeef4(&local_80);
              return 0;
            }
            if (lVar6 == 0) {
LAB_0428cfd0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar11 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0428cfd0;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(int *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = iVar2;
              plVar7 = local_70;
            }
            else {
              FUN_057971a8(lVar6,iVar2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              plVar7 = local_70;
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}

