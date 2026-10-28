// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$GetDebugString
// address: 0x43d90d8
// body: available
// range: 0x43d90d8-0x43d93b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d93ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43d93b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_FilterBase__GetDebugString(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  if ((DAT_09517ca3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f5858);
    FUN_03f5c2a4(&DAT_0920b738);
    FUN_03f5c2a4(&DAT_09214728);
    FUN_03f5c2a4(&DAT_091f5d98);
    FUN_03f5c2a4(&DAT_09201c98);
    DAT_09517ca3 = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_28 = 0;
  local_48 = 0;
  lVar2 = param_1[0xc];
  uVar3 = **(undefined8 **)(DAT_09535468 + 0xb8);
  if (lVar2 != 0) {
    uStack_38 = *(undefined8 *)(lVar2 + 0x34);
    local_40 = *(undefined8 *)(lVar2 + 0x2c);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09517cac == '\0') {
      FUN_03f5c2a4(&DAT_09189c30);
      DAT_09517cac = '\x01';
    }
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = FUN_043d97d4(&local_40,0,0,0);
    uVar3 = System_String__Concat(uVar3,DAT_0920b738,uVar1,DAT_091f5858,0);
  }
  if ((int)param_1[5] != 1) {
    return uVar3;
  }
  if (DAT_09517cab == '\0') {
    FUN_03f5c2a4(&DAT_0918cb90);
    DAT_09517cab = '\x01';
  }
  local_48 = **(undefined8 **)(DAT_0918cb90 + 0xb8);
  local_28 = local_48;
  (**(code **)(*param_1 + 0x368))(param_1,&local_28,&local_48,*(undefined8 *)(*param_1 + 0x370));
  lVar2 = FUN_03f5c394(DAT_091805f8,6);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20),uVar3);
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = DAT_09201c98;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28));
        uVar3 = FUN_040c8e48(&local_28,0,0,0);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = uVar3;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x30),uVar3);
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = DAT_091f5d98;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x38));
            uVar3 = FUN_040c8e48(&local_48,0,0,0);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = uVar3;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x40),uVar3);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = DAT_09214728;
                thunk_FUN_03f5d7b8();
                uVar3 = System_String__Concat(lVar2,0);
                return uVar3;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

