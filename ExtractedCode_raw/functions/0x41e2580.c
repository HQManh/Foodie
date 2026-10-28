// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$AddPendingCandidate
// address: 0x41e2580
// body: available
// range: 0x41e2580-0x41e2703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e26d4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41e26fc to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41e2700 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx__AddPendingCandidate
               (undefined8 param_1,long param_2,long param_3,undefined4 param_4,byte param_5)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_09516ae2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_0918e6c0);
    FUN_03f5c2a4(&DAT_091b20e8);
    DAT_09516ae2 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0918e6c0);
  AnhPD_FoodOrder_AutoCompleteOrderFx_Candidate___ctor(lVar4,0);
  if (param_3 != 0) {
    uVar5 = AnhPD_FoodOrder_AutoCompleteOrderFx__OfferForId(param_1,*(undefined8 *)(param_3 + 0x10))
    ;
    if (*(int *)(DAT_09181918 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181918);
    }
    uVar5 = AnhPD_FoodOrder_AutoCompleteOrderFx__Reprioritised(uVar5,param_4);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_3 + 0x10);
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_3 + 0x10);
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38));
      uVar1 = *(undefined4 *)(param_3 + 0x18);
      *(byte *)(lVar4 + 0x40) = param_5 & 1;
      *(undefined4 *)(lVar4 + 0x44) = uVar1;
      lVar3 = DAT_091b20e8;
      if (param_2 != 0) {
        lVar7 = *(long *)(param_2 + 0x10);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar2 = *(uint *)(param_2 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar2 + 1;
            plVar6 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
            *plVar6 = lVar4;
            thunk_FUN_03f5d7b8(plVar6,lVar4);
            return;
          }
          FUN_057e0c68(param_2,lVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

