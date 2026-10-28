// rea decompile_all
// name: AnhPD.FoodOrder.CafePieceTable$$RollToppings
// address: 0x414228c
// body: available
// range: 0x414228c-0x41425cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41425c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41425cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CafePieceTable__RollToppings
               (undefined8 *param_1,undefined8 *param_2,long param_3,int param_4,long param_5,
               undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095163e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_091ab9e0);
    FUN_03f5c2a4(&DAT_091ab9f0);
    FUN_03f5c2a4(&DAT_091ab9f8);
    FUN_03f5c2a4(&DAT_091ab9d0);
    FUN_03f5c2a4(&DAT_091aba00);
    FUN_03f5c2a4(&DAT_091aba08);
    FUN_03f5c2a4(&DAT_0917be38);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095163e9 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_0917be38);
  FUN_0579924c(lVar6,DAT_091ab9d0);
  if (param_3 != 0) {
    if (0 < (int)*(ulong *)(param_3 + 0x18)) {
      uVar9 = 0;
      uVar7 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar5 = *(undefined4 *)(param_3 + 0x20 + uVar9 * 4);
        uVar7 = AnhPD_FoodOrder_PieceLookup__Exists(uVar5,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(DAT_09182240 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = AnhPD_FoodOrder_CafePieceTable__ExcludedFromRandom(uVar5);
          lVar2 = DAT_091ab9e0;
          if ((uVar7 & 1) == 0) {
            if (lVar6 == 0) goto LAB_041425cc;
            lVar8 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_041425cc;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
            }
            else {
              FUN_05799adc(lVar6,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar7 = (ulong)*(uint *)(param_3 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(param_3 + 0x18));
    }
    if (lVar6 != 0) {
      iVar3 = *(int *)(lVar6 + 0x18);
      if (iVar3 == 0) {
        uStack_78 = param_2[1];
        local_80 = *param_2;
        local_70 = param_2[2];
      }
      else {
        iVar4 = param_4;
        if (iVar3 <= param_4) {
          iVar4 = iVar3;
        }
        if (param_4 < 1) {
          iVar4 = iVar3;
        }
        iVar3 = UnityEngine_Random__Range(0,iVar4 + 1,0);
        uStack_78 = param_2[1];
        local_80 = *param_2;
        local_70 = param_2[2];
        if (0 < iVar3) {
          do {
            if (*(int *)(lVar6 + 0x18) < 1) break;
            uStack_98 = uStack_78;
            local_a0 = local_80;
            local_90 = local_70;
            if (*(int *)(DAT_09182240 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_b8 = uStack_98;
            local_c0 = local_a0;
            local_b0 = local_90;
            iVar4 = AnhPD_FoodOrder_CafePieceTable__PickAllowed(lVar6,&local_c0,param_6);
            if (iVar4 < 0) break;
            uVar5 = FUN_057997e4(lVar6,iVar4,DAT_091aba08);
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189158);
            }
            AnhPD_FoodOrder_PieceSet__Add(&local_a0,&local_80,uVar5,1,0);
            uStack_78 = uStack_98;
            local_80 = local_a0;
            local_70 = local_90;
            FUN_0579b33c(lVar6,iVar4,DAT_091ab9f8);
            if (param_5 == 0) goto LAB_041425cc;
            uVar9 = (**(code **)(param_5 + 0x18))
                              (*(undefined8 *)(param_5 + 0x40),uVar5,*(undefined8 *)(param_5 + 0x28)
                              );
            if ((uVar9 & 1) != 0) {
              FUN_0579b1ec(lVar6,param_5,DAT_091ab9f0);
            }
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      param_1[1] = uStack_78;
      *param_1 = local_80;
      param_1[2] = local_70;
      return;
    }
  }
LAB_041425cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

