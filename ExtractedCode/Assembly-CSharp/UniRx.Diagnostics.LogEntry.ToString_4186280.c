// rea decompile_all
// name: UniRx.Diagnostics.LogEntry$$ToString
// address: 0x4186280
// body: available
// range: 0x4186280-0x4186513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418650c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4186510 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Diagnostics_LogEntry__ToString(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  
  if ((DAT_09516730 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09187c68);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09214860);
    FUN_03f5c2a4(&DAT_092139f8);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_09214720);
    DAT_09516730 = 1;
  }
  local_38 = 0;
  uVar1 = DAT_091f5700;
  if (param_1[5] != 0) {
    uVar1 = System_Environment__get_NewLine(0);
    plVar4 = (long *)param_1[5];
    if (plVar4 == (long *)0x0) goto LAB_04186510;
    uVar2 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar1 = System_String__Concat(uVar1,uVar2,0);
  }
  lVar3 = FUN_03f5c394(DAT_091805f8,9);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = DAT_092139f8;
      thunk_FUN_03f5d7b8();
      local_38 = param_1[3];
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTime__ToString(&local_38,0);
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28),uVar2);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = DAT_09214860;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = *param_1;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38));
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = DAT_09214860;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40));
              local_50 = DAT_09187c68;
              local_40 = *(undefined4 *)(param_1 + 1);
              uStack_48 = 0xffffffffffffffff;
              uVar2 = System_Enum__ToString(&local_50,0);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = uVar2;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x48),uVar2);
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = DAT_09214720;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x50));
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar3 + 0x58) = param_1[2];
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x58));
                    if (8 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x60) = uVar1;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x60),uVar1);
                      System_String__Concat(lVar3,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_04186510:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

