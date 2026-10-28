// rea decompile_all
// name: LiveOpsR1.LiveOpBehaviorTimeLimitedPurchaseOfferAbstract.<>c__DisplayClass29_0$$<Purchase>g__OnDonePurchase|0
// address: 0x7361dc0
// body: available
// range: 0x7361dc0-0x7361f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7361f60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7361f64 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7361f70 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7361f74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void LiveOpsR1_LiveOpBehaviorTimeLimitedPurchaseOfferAbstract_<>c__DisplayClass29_0__<Purchase>g__OnDonePurchase_0
               (long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_0952086a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187a08);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0920b180);
    DAT_0952086a = 1;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar3 = LiveOpsR1_LiveOpBehaviorTimeLimitedPurchaseOfferAbstract__DataKeyCountPurchased
                        (*(undefined8 *)(param_1 + 0x10));
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar4 != 0)) {
        LiveOpsR1_LiveOpsDataAccessWrapper__ChangeInt(lVar4,uVar3,1,0);
        plVar1 = *(long **)(param_1 + 0x18);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x208))
                    (plVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar1 + 0x210));
          if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(*(long *)(param_1 + 0x18) + 0x20) != 0)
             ) {
            LiveOpsR1_LiveOpsDataAccessWrapper__Save();
            if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
            if (lVar4 != 0) {
              (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
            }
            lVar4 = *(long *)(param_1 + 0x20);
            goto joined_r0x07361f4c;
          }
        }
      }
    }
    else {
      if (*(int *)(DAT_09187a08 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = **(long **)(DAT_09187a08 + 0xb8);
      plVar1 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (plVar1 != (long *)0x0) {
        lVar5 = *(long *)(param_1 + 0x10);
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
          uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,0);
        }
        if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar1[4] = lVar5;
        thunk_FUN_03f5d7b8(plVar1 + 4,lVar5);
        if (lVar4 != 0) {
          EssentialSystemR1_R1Logger__LogErrorFormat(lVar4,DAT_0920b180,plVar1,0);
          lVar4 = *(long *)(param_1 + 0x28);
joined_r0x07361f4c:
          if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07361ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
            ;
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

