// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotRunner$$DumpSnapshot
// address: 0x4177880
// body: available
// range: 0x4177880-0x4177c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4177c7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4177c80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotRunner__DumpSnapshot(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined8 local_38;
  
  if ((DAT_09516601 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091ab468);
    FUN_03f5c2a4(&DAT_091ab4f0);
    FUN_03f5c2a4(&DAT_091ab440);
    FUN_03f5c2a4(&DAT_091ab590);
    FUN_03f5c2a4(&DAT_091ab4b0);
    FUN_03f5c2a4(&DAT_091ab568);
    FUN_03f5c2a4(&DAT_091ab518);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09213b90);
    FUN_03f5c2a4(&DAT_09217e00);
    FUN_03f5c2a4(&DAT_09224f68);
    FUN_03f5c2a4(&DAT_09221440);
    FUN_03f5c2a4(&DAT_092189e8);
    FUN_03f5c2a4(&DAT_09220758);
    DAT_09516601 = 1;
  }
  uVar1 = AnhPD_FoodOrder_Autoplay_CookingBotRunner__EnsureInitialized(param_1);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar2 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__ReadState();
    lVar3 = FUN_03f5c394(DAT_091805f8,6);
    if (lVar2 != 0) {
      local_38 = *(undefined8 *)(lVar2 + 0x10);
      uVar4 = FUN_03f5c42c(DAT_09535440,&local_38);
      local_3c[0] = *(undefined1 *)(lVar2 + 0x1c);
      uVar5 = FUN_03f5c42c(DAT_09535400,local_3c);
      uVar4 = System_String__Format(DAT_09213b90,uVar4,uVar5,0);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) == 0) goto LAB_04177c80;
        *(undefined8 *)(lVar3 + 0x20) = uVar4;
        thunk_FUN_03f5d7b8();
        if (*(long *)(lVar2 + 0x28) != 0) {
          local_40 = *(undefined4 *)(*(long *)(lVar2 + 0x28) + 0x18);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_40);
          if (*(long *)(lVar2 + 0x30) != 0) {
            local_44 = *(undefined4 *)(*(long *)(lVar2 + 0x30) + 0x18);
            uVar5 = FUN_03f5c42c(DAT_09535420,&local_44);
            uVar4 = System_String__Format(DAT_09221440,uVar4,uVar5,0);
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_04177c80;
            *(undefined8 *)(lVar3 + 0x28) = uVar4;
            thunk_FUN_03f5d7b8();
            if ((*(long *)(lVar2 + 0x38) != 0) &&
               (lVar7 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10), lVar7 != 0)) {
              local_48 = *(undefined4 *)(lVar7 + 0x18);
              uVar4 = FUN_03f5c42c(DAT_09535420,&local_48);
              if (*(long *)(lVar2 + 0x48) != 0) {
                local_4c = *(undefined4 *)(*(long *)(lVar2 + 0x48) + 0x18);
                uVar5 = FUN_03f5c42c(DAT_09535420,&local_4c);
                uVar4 = System_String__Format(DAT_092189e8,uVar4,uVar5,0);
                if (2 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x30) = uVar4;
                  thunk_FUN_03f5d7b8();
                  uVar4 = DAT_09217e00;
                  uVar6 = 0;
                  if (*(long *)(lVar2 + 0x40) != 0) {
                    lVar7 = *(long *)(*(long *)(lVar2 + 0x40) + 0x18);
                    if (lVar7 == 0) goto LAB_04177c7c;
                    uVar6 = *(undefined4 *)(lVar7 + 0x18);
                  }
                  local_38 = CONCAT44(local_38._4_4_,uVar6);
                  uVar5 = FUN_03f5c42c(DAT_09535420,&local_38);
                  uVar4 = System_String__Format(uVar4,uVar5,0);
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar3 + 0x38) = uVar4;
                    thunk_FUN_03f5d7b8();
                    if (*(long *)(lVar2 + 0x58) != 0) {
                      local_40 = *(undefined4 *)(*(long *)(lVar2 + 0x58) + 0x18);
                      uVar4 = FUN_03f5c42c(DAT_09535420,&local_40);
                      if (*(long *)(lVar2 + 0x60) != 0) {
                        local_44 = *(undefined4 *)(*(long *)(lVar2 + 0x60) + 0x18);
                        uVar5 = FUN_03f5c42c(DAT_09535420,&local_44);
                        uVar4 = System_String__Format(DAT_09220758,uVar4,uVar5,0);
                        if (4 < *(uint *)(lVar3 + 0x18)) {
                          *(undefined8 *)(lVar3 + 0x40) = uVar4;
                          thunk_FUN_03f5d7b8();
                          if (*(long *)(param_1 + 0x48) == 0) goto LAB_04177c7c;
                          local_48 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__get_UnmappedIdCount
                                               ();
                          uVar4 = FUN_03f5c42c(DAT_09535420,&local_48);
                          uVar4 = System_String__Format(DAT_09224f68,uVar4,0);
                          if (5 < *(uint *)(lVar3 + 0x18)) {
                            *(undefined8 *)(lVar3 + 0x48) = uVar4;
                            thunk_FUN_03f5d7b8();
                            uVar4 = System_String__Concat(lVar3,0);
                            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                              FUN_03f5c424(DAT_091835d0);
                            }
                            UnityEngine_Debug__Log(uVar4,param_1,0);
                            return;
                          }
                        }
                        goto LAB_04177c80;
                      }
                    }
                    goto LAB_04177c7c;
                  }
                }
LAB_04177c80:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
            }
          }
        }
      }
    }
  }
LAB_04177c7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

