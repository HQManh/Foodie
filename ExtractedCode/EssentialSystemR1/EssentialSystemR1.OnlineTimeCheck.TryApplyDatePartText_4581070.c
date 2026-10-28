// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck$$TryApplyDatePartText
// address: 0x4581070
// body: available
// range: 0x4581070-0x45812e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45812e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45812e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_OnlineTimeCheck__TryApplyDatePartText(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09518924 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09188c20);
    DAT_09518924 = 1;
  }
  lVar13 = *(long *)(param_1 + 0x70);
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 0x18) == 0) {
LAB_045812e4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar8 = System_Int32__TryParse(*(undefined8 *)(lVar13 + 0x20),(long)&local_48 + 4,0);
    if (((uVar8 & 1) != 0) && (local_48._4_4_ - 1U < 9999)) {
      lVar13 = *(long *)(param_1 + 0x70);
      if (lVar13 == 0) goto LAB_045812e0;
      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_045812e4;
      uVar8 = System_Int32__TryParse(*(undefined8 *)(lVar13 + 0x28),&local_48,0);
      if (((uVar8 & 1) != 0) && ((int)local_48 - 1U < 0xc)) {
        lVar13 = *(long *)(param_1 + 0x70);
        if (lVar13 == 0) goto LAB_045812e0;
        if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_045812e4;
        uVar9 = System_Int32__TryParse(*(undefined8 *)(lVar13 + 0x30),(long)&local_50 + 4,0);
        uVar8 = local_48;
        if (((uVar9 & 1) != 0) && (iVar2 = local_50._4_4_, 0 < local_50._4_4_)) {
          uVar1 = local_48._4_4_;
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar6 = System_DateTime__DaysInMonth(uVar1,uVar8 & 0xffffffff,0);
          if (iVar2 <= iVar6) {
            lVar13 = *(long *)(param_1 + 0x70);
            if (lVar13 == 0) goto LAB_045812e0;
            if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) == 0) goto LAB_045812e4;
            uVar8 = System_Int32__TryParse(*(undefined8 *)(lVar13 + 0x38),&local_50,0);
            if (((uVar8 & 1) != 0) && ((uint)local_50 < 0x18)) {
              lVar13 = *(long *)(param_1 + 0x70);
              if (lVar13 == 0) goto LAB_045812e0;
              if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_045812e4;
              uVar8 = System_Int32__TryParse(*(undefined8 *)(lVar13 + 0x40),(long)&local_58 + 4,0);
              if (((uVar8 & 1) != 0) && (local_58._4_4_ < 0x3c)) {
                lVar13 = *(long *)(param_1 + 0x70);
                if (lVar13 == 0) goto LAB_045812e0;
                if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_045812e4;
                uVar10 = System_Int32__TryParse(*(undefined8 *)(lVar13 + 0x48),&local_58,0);
                uVar4 = local_48;
                uVar9 = local_50;
                uVar8 = local_58;
                if (((uVar10 & 1) != 0) && ((uint)local_58 < 0x3c)) {
                  uVar1 = local_58._4_4_;
                  uVar5 = local_48._4_4_;
                  uVar3 = local_50._4_4_;
                  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar7 = System_DateTime__get_Kind(param_1 + 0x58,0);
                  local_60 = 0;
                  System_DateTime___ctor
                            (&local_60,uVar5,uVar4 & 0xffffffff,uVar3,uVar9 & 0xffffffff,uVar1,
                             uVar8 & 0xffffffff,uVar7,0);
                  uVar12 = local_60;
                  lVar13 = DAT_09188c20;
                  *(undefined8 *)(param_1 + 0x58) = local_60;
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar11 = EssentialSystemR1_OnlineTimeCheck__get_BaseNow();
                  uVar12 = System_DateTime__op_Subtraction(uVar12,uVar11,0);
                  *(undefined8 *)(param_1 + 0x50) = uVar12;
                  EssentialSystemR1_OnlineTimeCheck__SyncDaySlider(param_1);
                }
              }
            }
          }
        }
      }
    }
    return;
  }
LAB_045812e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

