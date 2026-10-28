// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineQuery$$AppendUnservedRecipes
// address: 0x4208c6c
// body: available
// range: 0x4208c6c-0x4208eeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4208ed0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4208ed4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4208ed8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4208edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4208ee0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4208ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4208ee8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineQuery__AppendUnservedRecipes(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09516c23 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a28a0);
    FUN_03f5c2a4(&DAT_091a28a8);
    FUN_03f5c2a4(&DAT_091a28b0);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a82a0);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091ac248);
    FUN_03f5c2a4(&DAT_091881a0);
    DAT_09516c23 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x60);
    uVar3 = AnhPD_FoodOrder_CustomerLineController__GetOpenOrderIndices();
    lVar4 = thunk_FUN_03f9944c(DAT_09179e18);
    FUN_053d6ef0(lVar4,uVar3,DAT_091a82a0);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x30), lVar8 != 0)) {
      FUN_057e185c(&local_98,lVar8,DAT_091ac248);
      local_70 = local_88;
      uStack_78 = puStack_90;
      local_80 = local_98;
      local_98 = 0;
      iVar1 = 0;
      puStack_90 = &local_80;
      do {
        do {
          iVar9 = iVar1;
          uVar5 = FUN_071bd28c(&local_80,DAT_091a28a8);
          lVar8 = local_70;
          if ((uVar5 & 1) == 0) {
            FUN_071bd288(&local_80,DAT_091a28a0);
            return;
          }
          if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = AnhPD_FoodOrder_LevelInfo__ConvertOrderData
                            (lVar6,*(undefined8 *)(local_70 + 0x10),0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar10 = *(int *)(lVar6 + 0x18);
          if (iVar10 < 2) {
            iVar10 = 1;
          }
          iVar1 = iVar10 + iVar9;
        } while (iVar1 <= iVar9);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        do {
          uVar5 = FUN_053d750c(lVar4,iVar9,DAT_091a82c0);
          lVar6 = DAT_091b0570;
          if ((uVar5 & 1) != 0) {
            if (param_2 != 0) {
              lVar7 = *(long *)(param_2 + 0x10);
              uVar3 = *(undefined8 *)(lVar8 + 0x10);
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar2 = *(uint *)(param_2 + 0x18);
                if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(param_2 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar3;
                  thunk_FUN_03f5d7b8();
                }
                else {
                  FUN_057e0c68(param_2,uVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                }
                break;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar10 = iVar10 + -1;
          iVar9 = iVar9 + 1;
        } while (iVar10 != 0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

