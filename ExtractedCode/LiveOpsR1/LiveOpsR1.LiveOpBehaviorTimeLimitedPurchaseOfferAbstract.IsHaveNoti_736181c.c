// rea decompile_all
// name: LiveOpsR1.LiveOpBehaviorTimeLimitedPurchaseOfferAbstract$$IsHaveNoti
// address: 0x736181c
// body: available
// range: 0x736181c-0x736197f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7361978 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x736197c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong LiveOpsR1_LiveOpBehaviorTimeLimitedPurchaseOfferAbstract__IsHaveNoti(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_09520865 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0921e218);
    DAT_09520865 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  local_28 = 0;
  local_38 = 0;
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar6 != 0) {
    local_28 = LiveOpsR1_LiveOpsDataAccessWrapper__GetDateTime
                         (lVar6,DAT_0921e218,*(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10))
    ;
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188c20);
    }
    local_38 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
    uVar2 = System_DateTime__get_Date(&local_38,0);
    uVar3 = System_DateTime__get_Date(&local_28,0);
    uVar4 = System_DateTime__op_Inequality(uVar2,uVar3,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x40);
      if (lVar6 == 0) goto LAB_0736197c;
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar7 = 0;
        uVar5 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        while( true ) {
          if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558(uVar4);
          }
          iVar1 = LiveOpsR1_LiveOpBehaviorTimeLimitedPurchaseOfferAbstract__GetNumPurchased
                            (param_1,*(undefined8 *)(lVar6 + 0x20 + uVar7 * 8));
          uVar4 = (ulong)(iVar1 < 1);
          if (iVar1 < 1) break;
          uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar7 = uVar7 + 1;
          if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar7) {
            return uVar4;
          }
        }
        return uVar4;
      }
    }
    return 0;
  }
LAB_0736197c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

