// rea decompile_all
// name: Datpt.Cook_Order.CustomerController$$OnGenerateNewCustomer
// address: 0x41a5124
// body: available
// range: 0x41a5124-0x41a534f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a534c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Datpt_Cook_Order_CustomerController__OnGenerateNewCustomer
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_0951686d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091747c0);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c6ed0);
    FUN_03f5c2a4(&DAT_091ac1d8);
    FUN_03f5c2a4(&DAT_091ac1e0);
    FUN_03f5c2a4(&DAT_091d4fe0);
    FUN_03f5c2a4(&DAT_091e8270);
    FUN_03f5c2a4(&DAT_0918f8c0);
    DAT_0951686d = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f8c0);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = param_7;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),param_7);
    if (*(long *)(param_7 + 0x20) != 0) {
      uVar1 = UnityEngine_Random__Range(0,*(undefined4 *)(*(long *)(param_7 + 0x20) + 0x18),0);
      if (*(long *)(param_7 + 0x20) != 0) {
        uVar3 = FUN_057e0998(*(long *)(param_7 + 0x20),uVar1,DAT_091ac1e0);
        lVar4 = FUN_04c384b8(param_1,param_2,param_3,uVar3,*(undefined8 *)(param_7 + 0x30),
                             DAT_091d4fe0);
        plVar5 = (long *)(lVar2 + 0x10);
        *plVar5 = lVar4;
        thunk_FUN_03f5d7b8(plVar5,lVar4);
        lVar4 = *plVar5;
        uVar3 = thunk_FUN_03f9944c(DAT_091747c0);
        FUN_070a7580(uVar3,param_7,DAT_091c6ed0,0);
        if (lVar4 != 0) {
          Datpt_Cook_Order_Customer__add_OnCustomerServiced(lVar4,uVar3);
          lVar4 = *plVar5;
          uVar3 = thunk_FUN_03f9944c(DAT_091747c0);
          FUN_070a7580(uVar3,param_7,DAT_091c6ed0,0);
          if (lVar4 != 0) {
            Datpt_Cook_Order_Customer__add_OnMissedCustomer(lVar4,uVar3);
            lVar4 = *(long *)(lVar2 + 0x10);
            uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar3,lVar2,DAT_091e8270,0);
            if (lVar4 != 0) {
              Datpt_Cook_Order_Customer__MoveIn(param_4,param_5,param_6,lVar4,uVar3);
              return *plVar5;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

