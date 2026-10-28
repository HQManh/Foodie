// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamScoopOrder$$ReadOrder
// address: 0x4148b2c
// body: available
// range: 0x4148b2c-0x4148d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4148d94 to 0x57971a8 FUN_057971a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4148d98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4148d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IceCreamScoopOrder__ReadOrder(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 *puStack_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined4 local_34;
  
  if ((DAT_09516494 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_09186a70);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adcc0);
    DAT_09516494 = 1;
  }
  local_34 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uVar3 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = AnhPD_FoodOrder_FlexibleId__IsFlexible(param_1,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = AnhPD_FoodOrder_IceCreamPieceTable__TryGetPiece(param_1,&local_34);
      uVar2 = local_34;
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = AnhPD_FoodOrder_IceCreamPieceTable__IsFlavor(uVar2);
        lVar4 = DAT_091adc88;
        if ((uVar3 & 1) != 0) {
          if (param_2 != 0) {
            lVar6 = *(long *)(param_2 + 0x10);
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(param_2 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
                return;
              }
              FUN_057971a8(param_2,uVar2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              return;
            }
          }
          goto LAB_04148d9c;
        }
      }
    }
    else {
      lVar4 = AnhPD_FoodOrder_FlexibleId__Parts(param_1,0);
      if (lVar4 == 0) {
LAB_04148d9c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_05797d74(&local_68,lVar4,DAT_091adcc0);
      uStack_48 = puStack_60;
      local_50 = local_68;
      puStack_60 = &local_50;
      local_40 = local_58;
      local_68 = 0;
LAB_04148c2c:
      uVar5 = FUN_071ad7a4(&local_50,DAT_091a34d8);
      uVar3 = local_40;
      if ((uVar5 & 1) != 0) {
        uVar2 = (undefined4)local_40;
        if (*(int *)(DAT_09186a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = AnhPD_FoodOrder_IceCreamScoopOrder__IsFlavor(uVar3 & 0xffffffff);
        lVar4 = DAT_091adc88;
        if ((uVar5 & 1) != 0) {
          if (param_2 != 0) {
            lVar6 = *(long *)(param_2 + 0x10);
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(param_2 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
              }
              else {
                FUN_057971a8(param_2,uVar3 & 0xffffffff,
                             *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_04148c2c;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_04148c2c;
      }
      FUN_071ad7a0(&local_50,DAT_091a34d0);
    }
  }
  return;
}

