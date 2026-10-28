// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$Fingerprint
// address: 0x4171d88
// body: available
// range: 0x4171d88-0x4171fef inclusive
// range: 0x4172024-0x41721eb inclusive
// range: 0x4172200-0x4172223 inclusive
// range: 0x417230c-0x4172313 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4171fec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172200 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172204 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172208 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417220c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172218 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417221c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172310 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04171fe8) */
/* WARNING: Removing unreachable block (ram,0x0417230c) */

int AnhPD_FoodOrder_Autoplay_CookingBotBridge__Fingerprint(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_095165ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2338);
    FUN_03f5c2a4(&DAT_091a23b0);
    FUN_03f5c2a4(&DAT_091a2308);
    FUN_03f5c2a4(&DAT_091a2398);
    FUN_03f5c2a4(&DAT_091a23b8);
    FUN_03f5c2a4(&DAT_091a2340);
    FUN_03f5c2a4(&DAT_091a2310);
    FUN_03f5c2a4(&DAT_091a23a0);
    FUN_03f5c2a4(&DAT_091a23a8);
    FUN_03f5c2a4(&DAT_091a2318);
    FUN_03f5c2a4(&DAT_091a23c0);
    FUN_03f5c2a4(&DAT_091a2348);
    FUN_03f5c2a4(&DAT_091ab4a8);
    FUN_03f5c2a4(&DAT_091ab458);
    FUN_03f5c2a4(&DAT_091ab560);
    FUN_03f5c2a4(&DAT_091ab538);
    FUN_03f5c2a4(&DAT_091ab4f0);
    FUN_03f5c2a4(&DAT_091ab440);
    FUN_03f5c2a4(&DAT_091ab590);
    FUN_03f5c2a4(&DAT_091ab490);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095165ee = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    FUN_057e185c(&local_f0,*(long *)(param_1 + 0x28),DAT_091ab560);
    iVar8 = 0x11;
    local_70 = local_e0;
    puStack_78 = puStack_e8;
    local_80 = local_f0;
    while (uVar3 = FUN_071bd28c(&local_80,DAT_091a23b8), (uVar3 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_70 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_f0,*(long *)(local_70 + 0x10),DAT_091ab538);
      local_a0 = local_f0;
      local_f0 = 0;
      puStack_98 = puStack_e8;
      local_90 = local_e0;
      puStack_e8 = &local_a0;
      while (uVar3 = FUN_071bd28c(&local_a0,DAT_091a23a0), lVar5 = local_90, (uVar3 & 1) != 0) {
        if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar4 = *(long **)(local_90 + 0x10);
        iVar1 = 0;
        if (plVar4 != (long *)0x0) {
          iVar1 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
        }
        iVar8 = *(int *)(lVar5 + 0x28) + (iVar1 + iVar8 * 0x1f) * 0x1f;
      }
      FUN_071bd288(&local_a0,DAT_091a2398);
    }
    FUN_071bd288(&local_80,DAT_091a23b0);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar5 != 0)) {
      FUN_057e185c(&local_f0,lVar5,DAT_091ab4a8);
      local_b0 = local_e0;
      puStack_b8 = puStack_e8;
      local_c0 = local_f0;
      local_f0 = 0;
      puStack_e8 = &local_c0;
      while (uVar3 = FUN_071bd28c(&local_c0,DAT_091a2340), lVar5 = local_b0, (uVar3 & 1) != 0) {
        if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = *(int *)(local_b0 + 0x10);
        uVar7 = *(undefined8 *)(local_b0 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar3 & 1) == 0) {
          iVar2 = 0;
        }
        else {
          lVar6 = *(long *)(lVar5 + 0x18);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar2 = UnityEngine_Object__GetInstanceID(lVar6,0);
        }
        iVar8 = *(int *)(lVar5 + 0x28) + (iVar2 + (iVar1 + iVar8 * 0x1f) * 0x1f) * 0x1f;
      }
      FUN_071bd288(&local_c0,DAT_091a2338);
      if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
        if (*(long *)(param_1 + 0x40) == 0) {
          iVar1 = 0;
        }
        else {
          lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
          if (lVar5 == 0) goto LAB_04172220;
          iVar1 = *(int *)(lVar5 + 0x18);
        }
        if (*(long *)(param_1 + 0x58) != 0) {
          iVar1 = iVar1 + (*(int *)(*(long *)(param_1 + 0x48) + 0x18) +
                          (*(int *)(*(long *)(param_1 + 0x30) + 0x18) + iVar8 * 0x1f) * 0x1f) * 0x1f
          ;
          FUN_057e185c(&local_d8,*(long *)(param_1 + 0x58),DAT_091ab458);
          local_f0 = 0;
          puStack_e8 = &local_d8;
          while( true ) {
            uVar3 = FUN_071bd28c(&local_d8,DAT_091a2310);
            if ((uVar3 & 1) == 0) {
              FUN_071bd288(&local_d8,DAT_091a2308);
              return iVar1;
            }
            if (local_c8 == 0) break;
            if (*(long *)(local_c8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar1 = *(int *)(*(long *)(local_c8 + 0x18) + 0x18) +
                    (*(int *)(local_c8 + 0x10) + iVar1 * 0x1f) * 0x1f;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
  }
LAB_04172220:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

