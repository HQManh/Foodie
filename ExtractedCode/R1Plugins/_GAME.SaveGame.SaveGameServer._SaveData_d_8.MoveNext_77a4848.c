// rea decompile_all
// name: _GAME.SaveGame.SaveGameServer.<SaveData>d__8$$MoveNext
// address: 0x77a4848
// body: available
// range: 0x77a4848-0x77a4d97 inclusive
// range: 0x77a4e78-0x77a4f5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a4d94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_SaveGame_SaveGameServer_<SaveData>d__8__MoveNext(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  if ((DAT_09522e38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_0919a170);
    FUN_03f5c2a4(&DAT_0919a190);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091d1660);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0918dec0);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    FUN_03f5c2a4(&DAT_09220340);
    FUN_03f5c2a4(&DAT_092258f8);
    FUN_03f5c2a4(&DAT_092142b8);
    FUN_03f5c2a4(&DAT_09220358);
    DAT_09522e38 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (*param_1 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_077a49d0:
    uVar6 = local_70._0_8_;
    if ((long *)local_70._0_8_ == (long *)0x0) {
      if (local_70[8] != '\0') goto LAB_077a4a84;
    }
    else {
      uVar1 = local_70._10_2_;
      lVar13 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f95a6c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f95a6c(lVar13);
      }
      lVar8 = *(long *)uVar6;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar13) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_077a4a70;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar6,lVar13,0);
LAB_077a4a70:
      uVar4 = (*(code *)*puVar5)(uVar6,uVar1,puVar5[1]);
      if ((uVar4 & 1) != 0) {
LAB_077a4a84:
        lVar13 = *(long *)(param_1 + 0x14);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar13 + 0x30) == 200) {
          uVar6 = *(undefined8 *)(lVar13 + 0x40);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar13 = FUN_04bd15a4(uVar6,DAT_091d1660);
          if (lVar13 != 0) {
            if (*(int *)(lVar13 + 0x10) == 0) {
              iVar2 = 0;
            }
            else {
              local_60._0_4_ = *(int *)(lVar13 + 0x10);
              uVar6 = FUN_03f5c42c(DAT_09535420,local_60);
              if (*(long *)(lVar13 + 0x18) == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x10);
              }
              uVar6 = System_String__Format(DAT_092142b8,uVar6,uVar7,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_Debug__LogWarning(uVar6,0);
              if (*(long *)(lVar13 + 0x18) == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x10);
              }
              uVar4 = System_String__op_Equality(uVar6,DAT_09220358,0);
              if ((uVar4 & 1) == 0) {
                uVar4 = System_String__op_Equality(uVar6,DAT_092258f8,0);
                if ((uVar4 & 1) == 0) {
                  uVar4 = System_String__op_Equality(uVar6,DAT_09220340,0);
                  auVar14._8_8_ = local_60._8_8_;
                  auVar14._0_8_ = local_60._0_8_;
                  iVar2 = 3;
                  if ((uVar4 & 1) == 0) {
                    iVar2 = 4;
                    local_60 = auVar14;
                  }
                }
                else {
                  iVar2 = 2;
                }
              }
              else {
                iVar2 = 1;
              }
            }
            goto LAB_077a4e7c;
          }
          goto LAB_077a4e78;
        }
      }
    }
    iVar2 = 5;
  }
  else {
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
    uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar4 & 1) == 0) {
      uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
      if ((uVar4 & 1) == 0) {
        if ((char)param_1[0x10] == '\0') {
          iVar2 = _GAME_SaveGame_SaveGameServer__get_DevicePlatform(0);
        }
        else {
          iVar2 = param_1[0xe];
        }
        lVar13 = *(long *)(param_1 + 0xc);
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
        uVar11 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
        uVar3 = _GAME_SaveGame_SaveGameServer__get_AppVersionCode(0);
        uVar12 = *(undefined8 *)(param_1 + 8);
        uVar6 = _GAME_SaveGame_SaveGameServer__get_CurrentAuth(0);
        uVar7 = thunk_FUN_03f9944c(DAT_0918dec0);
        _GAME_SaveGame_ABIServerSaveGameModel_RequestModel___ctor
                  (uVar7,uVar11,iVar2,uVar3,lVar13 + 1,uVar12,uVar6,0);
        uVar6 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar7,0);
        uVar11 = thunk_FUN_03f9944c(DAT_0918cfb8);
        _GAME_BaseGame_WebRequestModel___ctor(uVar11,uVar6,1,0xf,uVar7,0);
        *(undefined8 *)(param_1 + 0x14) = uVar11;
        thunk_FUN_03f5d7b8(param_1 + 0x14,uVar11);
        auVar14 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                            (*(undefined8 *)(param_1 + 0x14),(char)param_1[0x12],0,0);
        local_60._0_8_ = 0;
        local_60._8_8_ = 0;
        if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_60 = auVar14;
        thunk_FUN_03f5d7b8(local_60,0);
        local_70 = local_60;
        uVar4 = FUN_0430cf0c(local_70,DAT_0919a588);
        if ((uVar4 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x16) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 0x16,0);
          FUN_04791454(param_1 + 2,local_70,param_1,DAT_0919a170);
          return;
        }
        goto LAB_077a49d0;
      }
    }
LAB_077a4e78:
    iVar2 = 4;
  }
LAB_077a4e7c:
  *param_1 = -2;
  piVar9 = param_1 + 0x14;
  piVar9[0] = 0;
  piVar9[1] = 0;
  thunk_FUN_03f5d7b8(piVar9,0);
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 == (long *)0x0) {
    param_1[6] = iVar2;
  }
  else {
    lVar13 = *(long *)(DAT_0919a190 + 0x20);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c(lVar13);
    }
    lVar8 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar13) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_077a4f30;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,lVar13,2);
LAB_077a4f30:
    (*(code *)*puVar5)(plVar10,iVar2,puVar5[1]);
  }
  return;
}

