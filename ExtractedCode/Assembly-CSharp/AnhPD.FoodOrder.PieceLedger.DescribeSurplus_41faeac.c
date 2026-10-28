// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$DescribeSurplus
// address: 0x41faeac
// body: available
// range: 0x41faeac-0x41fb2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41fb2e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fb2e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fb2e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fb2ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_PieceLedger__DescribeSurplus(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  if ((DAT_09516bae & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ea30);
    FUN_03f5c2a4(&DAT_0919ca88);
    FUN_03f5c2a4(&DAT_091a5d80);
    FUN_03f5c2a4(&DAT_091a63f0);
    FUN_03f5c2a4(&DAT_091a63f8);
    FUN_03f5c2a4(&DAT_091a5d88);
    FUN_03f5c2a4(&DAT_091a6400);
    FUN_03f5c2a4(&DAT_091a5d90);
    FUN_03f5c2a4(&DAT_091b3638);
    FUN_03f5c2a4(&DAT_091b3630);
    FUN_03f5c2a4(&DAT_091b3648);
    FUN_03f5c2a4(&DAT_091b3628);
    FUN_03f5c2a4(&DAT_091b3658);
    FUN_03f5c2a4(&DAT_0917d648);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_091be9b0);
    FUN_03f5c2a4(&DAT_091be900);
    FUN_03f5c2a4(&DAT_0920c5f0);
    DAT_09516bae = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uVar7 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
  lVar8 = 0;
  if ((uVar2 & 1) != 0) {
    uVar7 = 0;
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_041fb2ec;
    lVar8 = AnhPD_FoodOrder_MessyController__get_LineHandle(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar8,0);
  uVar7 = 0;
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (lVar8 != 0) {
    uVar2 = AnhPD_FoodOrder_FCustomerLineHandle__get_IsDoneAllCustomer(lVar8,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    lVar8 = thunk_FUN_03f9944c(DAT_0917d648);
    FUN_057e0400(lVar8,DAT_091b3628);
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = 0;
    if (**(long **)(DAT_09189140 + 0xb8) != 0) {
      lVar3 = FUN_06fd8278(**(long **)(DAT_09189140 + 0xb8),DAT_0919ca88);
      uVar7 = 0;
      if (lVar3 != 0) {
        FUN_06544014(&local_90,lVar3,DAT_091be900);
        puStack_58 = puStack_88;
        local_60 = local_90;
        puStack_88 = &local_60;
        local_50 = local_80;
        local_90 = 0;
LAB_041fb11c:
        uVar2 = FUN_072759a8(&local_60,DAT_091a5d88);
        uVar7 = local_50;
        if ((uVar2 & 1) != 0) {
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = FUN_057e1004(param_1,local_50,DAT_091b3648);
          lVar3 = DAT_091b3630;
          if ((uVar2 & 1) == 0) {
            if (lVar8 != 0) {
              lVar6 = *(long *)(lVar8 + 0x10);
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar4 = uVar7;
                  thunk_FUN_03f5d7b8(puVar4,uVar7);
                }
                else {
                  FUN_057e0c68(lVar8,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_041fb11c;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_041fb11c;
        }
        FUN_072759a4(&local_60,DAT_091a5d80);
        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x28);
        uVar7 = 0;
        if (lVar3 != 0) {
          lVar3 = FUN_06fd8278(lVar3,DAT_0919ea30);
          uVar7 = 0;
          if (lVar3 != 0) {
            FUN_06544014(&local_78,lVar3,DAT_091be9b0);
            local_90 = 0;
            puStack_88 = &local_78;
            while (uVar2 = FUN_072759a8(&local_78,DAT_091a63f8), (uVar2 & 1) != 0) {
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_057e0e78(lVar8,local_68,DAT_091b3638);
            }
            uVar7 = FUN_072759a4(&local_78,DAT_091a63f0);
            if (lVar8 != 0) {
              if (*(int *)(lVar8 + 0x18) != 0) {
                local_90 = CONCAT44(local_90._4_4_,*(int *)(lVar8 + 0x18));
                uVar7 = FUN_03f5c42c(DAT_09535420,&local_90);
                if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09189140);
                }
                uVar5 = AnhPD_FoodOrder_PieceLedger__Describe(lVar8);
                uVar7 = System_String__Format(DAT_0920c5f0,uVar7,uVar5,0);
                return uVar7;
              }
              return 0;
            }
          }
        }
      }
    }
  }
LAB_041fb2ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar7);
}

