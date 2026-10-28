// rea decompile_all
// name: _GAME.EventSale.SOEventSaleConfig$$ReloadRemoteConfig
// address: 0x77fb5e8
// body: available
// range: 0x77fb5e8-0x77fb917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fb904 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77fb910 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77fb914 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_SOEventSaleConfig__ReloadRemoteConfig(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_48;
  undefined4 local_44;
  uint local_38;
  uint local_34;
  
  if ((DAT_0952318a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189970);
    FUN_03f5c2a4(&DAT_0918a4c8);
    FUN_03f5c2a4(&DAT_0921e748);
    FUN_03f5c2a4(&DAT_0921b268);
    FUN_03f5c2a4(&DAT_09214050);
    FUN_03f5c2a4(&DAT_0921b270);
    DAT_0952318a = 1;
  }
  if (*(int *)(DAT_09189970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = _GAME_Bridge_R1RemoteConfig__GetInt(DAT_0921e748,0x23,0);
  if (*(int *)(DAT_0918a4c8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918a4c8);
  }
  uVar7 = DAT_0921b270;
  **(undefined4 **)(DAT_0918a4c8 + 0xb8) = uVar1;
  uVar2 = _GAME_Bridge_R1RemoteConfig__GetInt(uVar7,0x1352889,0);
  uVar3 = _GAME_Bridge_R1RemoteConfig__GetInt(DAT_0921b268,0x13528ed,0);
  uVar4 = _GAME_EventSale_SOEventSaleConfig__IsValidDate(uVar2);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_0918a4c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = _GAME_EventSale_SOEventSaleConfig__IsValidDate(uVar3);
    if ((uVar4 & 1) != 0) goto LAB_077fb8d0;
  }
  plVar5 = (long *)FUN_03f5c394(DAT_09180318,4);
  local_34 = uVar2;
  lVar8 = FUN_03f5c42c(DAT_09535420,&local_34);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar8 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_077fb908:
    uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar8;
    thunk_FUN_03f5d7b8(plVar5 + 4,lVar8);
    local_38 = uVar3;
    lVar8 = FUN_03f5c42c(DAT_09535420,&local_38);
    if ((lVar8 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_077fb908;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar8;
      thunk_FUN_03f5d7b8(plVar5 + 5,lVar8);
      local_44 = 0x1352889;
      lVar8 = FUN_03f5c42c(DAT_09535420,&local_44);
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
      goto LAB_077fb908;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar8;
        thunk_FUN_03f5d7b8(plVar5 + 6,lVar8);
        local_48 = 0x13528ed;
        lVar8 = FUN_03f5c42c(DAT_09535420,&local_48);
        if ((lVar8 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_077fb908;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
          plVar5[7] = lVar8;
          thunk_FUN_03f5d7b8(plVar5 + 7,lVar8);
          uVar7 = System_String__Format(DAT_09214050,plVar5,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogWarning(uVar7,0);
          uVar3 = 0x13528ed;
          uVar2 = 0x1352889;
LAB_077fb8d0:
          if (*(int *)(DAT_0918a4c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar8 = *(long *)(DAT_0918a4c8 + 0xb8);
          *(uint *)(lVar8 + 4) = uVar2;
          *(uint *)(lVar8 + 8) = uVar3;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

