// rea decompile_all
// name: AnhPD.FoodOrder.CafePieceTable$$PickAllowed
// address: 0x414399c
// body: available
// range: 0x414399c-0x4143c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4143c38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_CafePieceTable__PickAllowed(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_095163ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091aba00);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091aba08);
    FUN_03f5c2a4(&DAT_091add20);
    DAT_095163ea = 1;
  }
  if (*(int *)(DAT_09182240 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_09182240 + 0xb8) + 0x90);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (param_1 != 0) {
      if (0 < *(int *)(param_1 + 0x18)) {
        iVar8 = 0;
        do {
          uStack_68 = param_2[1];
          local_70 = *param_2;
          local_60 = param_2[2];
          uVar2 = FUN_057997e4(param_1,iVar8,DAT_091aba08);
          if (*(int *)(DAT_09182240 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182240);
          }
          uStack_88 = uStack_68;
          local_90 = local_70;
          local_80 = local_60;
          uVar3 = AnhPD_FoodOrder_CafePieceTable__RandomAllows(&local_90,uVar2);
          if ((uVar3 & 1) != 0) {
            if (param_3 != 0) {
              uVar10 = param_2[1];
              uVar9 = *param_2;
              uVar6 = param_2[2];
              uVar2 = FUN_057997e4(param_1,iVar8,DAT_091aba08);
              local_70 = uVar9;
              uStack_68 = uVar10;
              local_60 = uVar6;
              uVar3 = (**(code **)(param_3 + 0x18))
                                (*(undefined8 *)(param_3 + 0x40),&local_70,uVar2,
                                 *(undefined8 *)(param_3 + 0x28));
              if ((uVar3 & 1) == 0) goto LAB_04143b98;
            }
            if (*(int *)(DAT_09182240 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = DAT_091adc88;
            lVar4 = *(long *)(*(long *)(DAT_09182240 + 0xb8) + 0x90);
            if (lVar4 == 0) goto LAB_04143c38;
            lVar7 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_04143c38;
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = iVar8;
            }
            else {
              FUN_057971a8(lVar4,iVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
          }
LAB_04143b98:
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x18));
      }
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(DAT_09182240 + 0xb8) + 0x90);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          if (*(int *)(DAT_09182240 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar5 = *(long *)(*(long *)(DAT_09182240 + 0xb8) + 0x90);
            if (lVar5 == 0) goto LAB_04143c38;
          }
          uVar2 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar5 + 0x18),0);
          uVar6 = FUN_05796eb0(lVar5,uVar2,DAT_091add20);
        }
        return uVar6;
      }
    }
  }
LAB_04143c38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

