// rea decompile_all
// name: _GAME.Leaderboard.ABIServerReadLeaderBoardModel.RequestModel$$ToJson
// address: 0x77c06d0
// body: available
// range: 0x77c06d0-0x77c09fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c09f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c09f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Leaderboard_ABIServerReadLeaderBoardModel_RequestModel__ToJson(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09522f1c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f6e10);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_09225f18);
    FUN_03f5c2a4(&DAT_09226aa0);
    FUN_03f5c2a4(&DAT_091f8a08);
    FUN_03f5c2a4(&DAT_091f6e80);
    FUN_03f5c2a4(&DAT_091f8a10);
    FUN_03f5c2a4(&DAT_091f6e90);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522f1c = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091805f8,0xb);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = DAT_09225f18;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
    local_34 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
    uVar2 = System_String__Format(DAT_09226038,uVar2,0);
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar1 + 0x28) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),uVar2);
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) = DAT_091f8a08;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30));
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x20);
          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38));
          if (4 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x40) = DAT_091f6e10;
            thunk_FUN_03f5d7b8();
            uVar3 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x28),0);
            uVar2 = DAT_091f5700;
            if ((uVar3 & 1) == 0) {
              uVar2 = System_String__Concat
                                (DAT_091f6e80,*(undefined8 *)(param_1 + 0x28),DAT_091f6e10,0);
            }
            if (5 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x48) = uVar2;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48));
              if (6 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x50) = DAT_091f6e90;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x50));
                local_38 = *(undefined4 *)(param_1 + 0x30);
                uVar2 = FUN_03f5c42c(DAT_09535420,&local_38);
                uVar2 = System_String__Format(DAT_09226038,uVar2,0);
                if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar1 + 0x58) = uVar2;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58),uVar2);
                  if (8 < *(uint *)(lVar1 + 0x18)) {
                    *(undefined8 *)(lVar1 + 0x60) = DAT_091f8a10;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60));
                    local_3c = *(undefined4 *)(param_1 + 0x34);
                    uVar2 = FUN_03f5c42c(DAT_09535420,&local_3c);
                    uVar2 = System_String__Format(DAT_09226038,uVar2,0);
                    if (9 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0x68) = uVar2;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x68),uVar2);
                      if (10 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0x70) = DAT_09226aa0;
                        thunk_FUN_03f5d7b8();
                        System_String__Concat(lVar1,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

