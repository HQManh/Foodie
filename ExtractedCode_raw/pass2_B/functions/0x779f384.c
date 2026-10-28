// rea decompile_all
// name: _GAME.SaveGame.SaveGameCodec$$Build
// address: 0x779f384
// body: available
// range: 0x779f384-0x779f9db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x779f9d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_SaveGame_SaveGameCodec__Build(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 local_70 [16];
  
  if ((DAT_09522e11 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09182c50);
    FUN_03f5c2a4(&DAT_09182ef8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09184268);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_091876b8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_09189938);
    FUN_03f5c2a4(&DAT_09189988);
    FUN_03f5c2a4(&DAT_0918a590);
    FUN_03f5c2a4(&DAT_0918a5a0);
    FUN_03f5c2a4(&DAT_09195f98);
    FUN_03f5c2a4(&DAT_09190728);
    FUN_03f5c2a4(&DAT_09193750);
    FUN_03f5c2a4(&DAT_09192148);
    FUN_03f5c2a4(&DAT_09194f30);
    FUN_03f5c2a4(&DAT_0918a5a8);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918d050);
    DAT_09522e11 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  *param_1 = 0;
  thunk_FUN_03f5d7b8(param_1,0);
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  if (*(int *)(DAT_09182c50 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = CakeOrder_SaveProfile_CookOrderSaveSync__Get(0);
  if (lVar2 != 0) {
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
      if (*(int *)(DAT_09183590 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_70 = System_DateTimeOffset__get_UtcNow(0);
      uVar3 = System_DateTimeOffset__ToUnixTimeMilliseconds(local_70,0);
      lVar4 = thunk_FUN_03f9944c(DAT_0918a5a0);
      _GAME_SaveGame_SaveGameModel___ctor();
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522cb0 == '\0') {
        FUN_03f5c2a4(&DAT_09180dc0);
        DAT_09522cb0 = '\x01';
      }
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x18) = **(undefined8 **)(DAT_09180dc0 + 0xb8);
        thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18));
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        *(undefined4 *)(lVar4 + 0x28) = 0;
        uVar1 = _GAME_SaveGame_SaveGameServer__get_AppVersionCode();
        *(undefined4 *)(lVar4 + 0x2c) = uVar1;
        if (*(int *)(DAT_0918a590 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918a590);
        }
        uVar5 = _GAME_SaveGame_SaveGameCodec__BuildSummary(lVar2);
        *(undefined8 *)(lVar4 + 0x30) = uVar5;
        thunk_FUN_03f5d7b8();
        lVar6 = thunk_FUN_03f9944c(DAT_09182ef8);
        _GAME_SaveGame_CoreSaveBlock___ctor();
        if (lVar6 != 0) {
          uVar5 = *(undefined8 *)(lVar2 + 0x10);
          *(undefined8 *)(lVar6 + 0x18) = uVar3;
          *(undefined8 *)(lVar6 + 0x20) = uVar5;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar2 + 0x18);
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar2 + 0x20);
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar2 + 0x28);
          thunk_FUN_03f5d7b8();
          *(long *)(lVar4 + 0x38) = lVar6;
          thunk_FUN_03f5d7b8((long *)(lVar4 + 0x38),lVar6);
          lVar6 = thunk_FUN_03f9944c(DAT_09189988);
          *(undefined4 *)(lVar6 + 0x10) = 1;
          System_Object___ctor(lVar6,0);
          lVar2 = DAT_091896c0;
          *(undefined8 *)(lVar6 + 0x18) = uVar3;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar2 = DAT_091896c0;
          }
          uVar5 = **(undefined8 **)(lVar2 + 0xb8);
          uVar3 = thunk_FUN_03f9944c(DAT_09193750);
          _GAME_Profile_ProfileDbModel_SaveGameModel___ctor(uVar3,uVar5,0);
          *(undefined8 *)(lVar6 + 0x20) = uVar3;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x20),uVar3);
          if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar2 = **(long **)(DAT_0918b978 + 0xb8);
          if (lVar2 == 0) {
            uVar3 = 0;
          }
          else {
            if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar2 = **(long **)(DAT_0918b978 + 0xb8);
            }
            uVar3 = thunk_FUN_03f9944c(DAT_09194f30);
            _GAME_Team_TeamDbModel_SaveGameModel___ctor(uVar3,lVar2,0);
          }
          *(undefined8 *)(lVar6 + 0x28) = uVar3;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x28),uVar3);
          lVar2 = **(long **)(DAT_091876b8 + 0xb8);
          if (lVar2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = thunk_FUN_03f9944c(DAT_09192148);
            _GAME_Leaderboard_LeaderboardDbModel_SaveGameModel___ctor(uVar3,lVar2,0);
          }
          *(undefined8 *)(lVar6 + 0x30) = uVar3;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x30),uVar3);
          if (*(int *)(DAT_09189938 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = _GAME_R1Features__IsEventEnabled(5,0);
          uVar3 = 0;
          if ((uVar7 & 1) != 0) {
            lVar2 = **(long **)(DAT_0918d050 + 0xb8);
            if (lVar2 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = thunk_FUN_03f9944c(DAT_09195f98);
              _GAME_WeeklyContest_WeeklyContestDbModel_SaveGameModel___ctor(uVar3,lVar2,0);
            }
          }
          *(undefined8 *)(lVar6 + 0x38) = uVar3;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x38),uVar3);
          if (*(int *)(DAT_09189938 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = _GAME_R1Features__IsEventEnabled(6,0);
          uVar3 = 0;
          if ((uVar7 & 1) != 0) {
            lVar2 = **(long **)(DAT_09184268 + 0xb8);
            if (lVar2 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = thunk_FUN_03f9944c(DAT_09190728);
              _GAME_EventSale_EventSaleDbModel_SaveGameModel___ctor(uVar3,lVar2,0);
            }
          }
          *(undefined8 *)(lVar6 + 0x40) = uVar3;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x40),uVar3);
          *(long *)(lVar4 + 0x40) = lVar6;
          thunk_FUN_03f5d7b8((long *)(lVar4 + 0x40),lVar6);
          if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (DAT_09522cb0 == '\0') {
            FUN_03f5c2a4(&DAT_09180dc0);
            DAT_09522cb0 = '\x01';
          }
          if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
          if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918a5a8);
          }
          uVar3 = _GAME_SaveGame_SaveGameStats__BuildForUpload(param_2,uVar3,param_3,0);
          *(undefined8 *)(lVar4 + 0x48) = uVar3;
          thunk_FUN_03f5d7b8();
          *param_1 = lVar4;
          thunk_FUN_03f5d7b8(param_1,lVar4);
          lVar2 = *param_1;
          if (*(int *)(DAT_0918a590 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = *(undefined8 *)(*(long *)(DAT_0918a590 + 0xb8) + 8);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187300);
          }
          uVar3 = Newtonsoft_Json_JsonConvert__SerializeObject(lVar2,uVar3,0);
          return uVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
}

