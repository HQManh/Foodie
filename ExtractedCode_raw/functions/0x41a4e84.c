// rea decompile_all
// name: Datpt.Cook_Order.CustomerController$$GenerateNewCustomerOnTrack
// address: 0x41a4e84
// body: available
// range: 0x41a4e84-0x41a4fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a4fcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_CustomerController__GenerateNewCustomerOnTrack
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_0951686c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aebf8);
    FUN_03f5c2a4(&DAT_091ac2a0);
    DAT_0951686c = 1;
  }
  lVar1 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins();
  if (lVar1 != 0) {
    Datpt_Cook_Order_LevelControlCookOrder__AddCustomerNum(lVar1,0xffffffff);
    lVar1 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins();
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x198) < 0) {
        return;
      }
      if (((*(long *)(param_4 + 0x28) != 0) &&
          (lVar1 = FUN_057e0998(*(long *)(param_4 + 0x28),param_5,DAT_091ac2a0), lVar1 != 0)) &&
         (*(long *)(lVar1 + 0x10) != 0)) {
        uVar4 = UnityEngine_Transform__get_position(*(long *)(lVar1 + 0x10),0);
        if (((*(long *)(param_4 + 0x28) != 0) &&
            (uVar6 = param_2, uVar7 = param_3,
            lVar1 = FUN_057e0998(*(long *)(param_4 + 0x28),param_5,DAT_091ac2a0), lVar1 != 0)) &&
           (*(long *)(lVar1 + 0x18) != 0)) {
          uVar5 = UnityEngine_Transform__get_position(*(long *)(lVar1 + 0x18),0);
          lVar1 = Datpt_Cook_Order_CustomerController__OnGenerateNewCustomer
                            (uVar4,param_2,param_3,uVar5,uVar6,uVar7,param_4);
          if ((lVar1 != 0) && (*(long *)(param_4 + 0x28) != 0)) {
            lVar3 = *(long *)(lVar1 + 0x98);
            lVar2 = FUN_057e0998(*(long *)(param_4 + 0x28),param_5,DAT_091ac2a0);
            if ((lVar2 != 0) && (lVar3 != 0)) {
              FUN_057e0e78(lVar3,*(undefined8 *)(lVar2 + 0x20),DAT_091aebf8);
              *(undefined4 *)(lVar1 + 0x7c) = param_5;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

