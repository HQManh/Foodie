// rea decompile_all
// name: AnhPD.FoodOrder.SandwichOrderStrategy.<StationInputsOf>d__17$$MoveNext
// address: 0x415d59c
// body: available
// range: 0x415d59c-0x415d673 inclusive
// range: 0x415d67c-0x415d743 inclusive
// range: 0x415d774-0x415d787 inclusive
// range: 0x415d7a0-0x415d833 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415d740 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415d784 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415d82c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415d830 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_SandwichOrderStrategy_<StationInputsOf>d__17__MoveNext(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  long *plStack_28;
  long local_18;
  
  local_18 = param_1;
  if ((DAT_0951650d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3f58);
    FUN_03f5c2a4(&DAT_091a3f60);
    FUN_03f5c2a4(&DAT_091af628);
    DAT_0951650d = 1;
  }
  plStack_28 = &local_18;
  local_30 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_0415d7cc;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
      uVar5 = 0;
      if (lVar2 != 0) {
        FUN_057e185c(&local_68,lVar2,DAT_091af628);
        uStack_48 = uStack_60;
        local_50 = local_68;
        local_40 = local_58;
        *(undefined8 *)(local_18 + 0x40) = uStack_60;
        *(undefined8 *)(local_18 + 0x38) = local_68;
        *(undefined8 *)(local_18 + 0x48) = local_58;
        thunk_FUN_03f5d7b8(local_18 + 0x38,0);
        *(undefined4 *)(local_18 + 0x10) = 0xfffffffd;
        while (uVar3 = FUN_071bd28c(local_18 + 0x38,DAT_091a3f58), (uVar3 & 1) != 0) {
          if ((*(long *)(local_18 + 0x48) != 0) &&
             (lVar2 = *(long *)(*(long *)(local_18 + 0x48) + 0x10), lVar2 != 0)) {
            uVar7 = (uint)*(ulong *)(lVar2 + 0x18);
            if (0 < (int)uVar7) {
              lVar6 = 0;
              bVar1 = false;
              do {
                if ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) * 8 - lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar8 = *(long *)(lVar2 + lVar6 + 0x20);
                if (lVar8 != 0) {
                  bVar1 = (bool)(*(int *)(lVar8 + 0x10) == 1 | bVar1);
                }
                lVar6 = lVar6 + 8;
              } while ((ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) * 8 - lVar6 != 0);
              if (bVar1) {
                *(long *)(local_18 + 0x50) = lVar2;
                thunk_FUN_03f5d7b8();
                uVar7 = 0;
                *(undefined4 *)(local_18 + 0x58) = 0;
                param_1 = local_18;
                while( true ) {
                  plVar4 = (long *)(param_1 + 0x50);
                  lVar2 = *plVar4;
                  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar7) break;
                  if (*(uint *)(lVar2 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar2 = *(long *)(lVar2 + (long)(int)uVar7 * 8 + 0x20);
                  if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == 0)) &&
                     (uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar2 + 0x18),0),
                     param_1 = local_18, (uVar3 & 1) == 0)) {
                    *(undefined8 *)(local_18 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
                    thunk_FUN_03f5d7b8((undefined8 *)(local_18 + 0x18));
                    uVar5 = 1;
                    *(undefined4 *)(local_18 + 0x10) = 1;
                    goto LAB_0415d728;
                  }
LAB_0415d7cc:
                  uVar7 = *(int *)(param_1 + 0x58) + 1;
                  *(uint *)(param_1 + 0x58) = uVar7;
                }
                *plVar4 = 0;
                thunk_FUN_03f5d7b8(plVar4,0);
              }
            }
          }
        }
        AnhPD_FoodOrder_SandwichOrderStrategy_<StationInputsOf>d__17__<>m__Finally1();
        uVar5 = 0;
        *(undefined8 *)(local_18 + 0x40) = 0;
        *(undefined8 *)(local_18 + 0x48) = 0;
        *(undefined8 *)(local_18 + 0x38) = 0;
      }
      goto LAB_0415d728;
    }
  }
  uVar5 = 0;
LAB_0415d728:
  lVar2 = local_30;
  if (local_30 != 0) {
    FUN_039b1d48(&plStack_28);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548(lVar2);
  }
  return uVar5;
}

