// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$RollBurger
// address: 0x4135454
// body: available
// range: 0x4135454-0x413578f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4135788 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413578c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_BurgerOrderStrategy__RollBurger(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 local_88;
  undefined8 *puStack_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  ulong local_60;
  
  if ((DAT_0951635c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091a23f8);
    FUN_03f5c2a4(&DAT_091a2400);
    FUN_03f5c2a4(&DAT_091a2408);
    FUN_03f5c2a4(&DAT_091ab610);
    FUN_03f5c2a4(&DAT_091ab620);
    FUN_03f5c2a4(&DAT_091ab628);
    FUN_03f5c2a4(&DAT_091ab600);
    FUN_03f5c2a4(&DAT_091ab630);
    FUN_03f5c2a4(&DAT_091ab638);
    FUN_03f5c2a4(&DAT_0917bd88);
    DAT_0951635c = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_0917bd88);
  FUN_0579924c(lVar6,DAT_091ab600);
  lVar7 = AnhPD_FoodOrder_BurgerOrderStrategy__get_AvailablePieces(param_1);
  if (lVar7 != 0) {
    FUN_0579a6a8(&local_88,lVar7,DAT_091ab620);
    local_60 = local_78;
    puStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
LAB_0413558c:
    uVar8 = FUN_071aef5c(&local_70,DAT_091a2400);
    uVar2 = local_60;
    if ((uVar8 & 1) != 0) {
      iVar11 = (int)local_60;
      if ((int)local_60 != 0) {
        if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar3 = AnhPD_FoodOrder_BurgerPieceTable__KindOf(uVar2 & 0xffffffff);
        lVar7 = DAT_091ab610;
        if (iVar3 == 0) {
          if (lVar6 != 0) {
            lVar9 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar11;
              }
              else {
                FUN_05799adc(lVar6,uVar2 & 0xffffffff,
                             *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_0413558c;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      goto LAB_0413558c;
    }
    FUN_071aef58(&local_70,DAT_091a23f8);
    lVar9 = thunk_FUN_03f9944c(DAT_0917bd88);
    FUN_0579924c(lVar9,DAT_091ab600);
    lVar7 = DAT_091ab610;
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0;
        }
        else {
          FUN_05799adc(lVar9,0,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar6 != 0) {
          iVar3 = *(int *)(param_1 + 0x28);
          iVar11 = *(int *)(lVar6 + 0x18);
          if (iVar3 < 2) {
            iVar3 = 1;
          }
          iVar3 = UnityEngine_Random__Range(1,iVar3 + 1,0);
          if (iVar3 <= iVar11) {
            iVar11 = iVar3;
          }
          if (0 < iVar11) {
            do {
              uVar4 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar6 + 0x18),0);
              uVar5 = FUN_057997e4(lVar6,uVar4,DAT_091ab638);
              lVar7 = DAT_091ab610;
              lVar10 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_04135788;
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
              }
              else {
                FUN_05799adc(lVar9,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              FUN_0579b33c(lVar6,uVar4,DAT_091ab628);
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          return lVar9;
        }
      }
    }
  }
LAB_04135788:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

