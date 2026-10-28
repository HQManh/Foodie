// rea decompile_all
// name: _GAME.SaveGame.SaveGameServer.<LoadRaw>d__7$$MoveNext
// address: 0x77a404c
// body: available
// range: 0x77a404c-0x77a45d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a45cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a45d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a45d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_SaveGame_SaveGameServer_<LoadRaw>d__7__MoveNext(int *param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09522e36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091996a8);
    FUN_03f5c2a4(&DAT_091996c8);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091d1638);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_091b77d8);
    FUN_03f5c2a4(&DAT_0918de98);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522e36 = 1;
  }
  local_a0 = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  lStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*param_1 == 0) {
    local_d0 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
LAB_077a430c:
    uVar3 = local_d0._0_8_;
    if ((long *)local_d0._0_8_ == (long *)0x0) {
      if (local_d0[8] != '\0') goto LAB_077a43c0;
    }
    else {
      uVar1 = local_d0._10_2_;
      lVar5 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar7 = *(long *)uVar3;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_077a43ac;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(uVar3,lVar5,0);
LAB_077a43ac:
      uVar2 = (*(code *)*puVar6)(uVar3,uVar1,puVar6[1]);
      if ((uVar2 & 1) != 0) {
LAB_077a43c0:
        lVar5 = *(long *)(param_1 + 0x12);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar5 + 0x30) == 200) {
          uVar3 = *(undefined8 *)(lVar5 + 0x40);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = FUN_04bd15a4(uVar3,DAT_091d1638);
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == 0)) && (*(long *)(lVar5 + 0x18) != 0)) {
            lStack_e8 = 0;
            local_f0 = 0;
            local_d8 = 0;
            local_e0 = 0;
            if (*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_f0 = *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x20);
            thunk_FUN_03f5d7b8(&local_f0);
            lVar5 = *(long *)(lVar5 + 0x18);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_e0 = *(undefined8 *)(lVar5 + 0x10);
            lStack_e8 = *(long *)(lVar5 + 0x18);
            local_d8 = CONCAT71(local_d8._1_7_,
                                *(long *)(lVar5 + 0x20) != 0 ||
                                (0 < lStack_e8 || 0 < *(int *)(lVar5 + 0x14)));
            local_50 = 0;
            local_90 = local_f0;
            local_70._8_8_ = 0;
            local_70._0_8_ = 0;
            uStack_58 = 0;
            uStack_60 = 0;
            uStack_78 = local_d8;
            lStack_88 = lStack_e8;
            local_80 = local_e0;
            FUN_05c3fb88(local_70,&local_90,DAT_091b77d8);
            uStack_b8 = local_70._8_8_;
            local_c0 = local_70._0_8_;
            uStack_a8 = uStack_58;
            uStack_b0 = uStack_60;
            local_a0 = local_50;
            goto LAB_077a4420;
          }
        }
      }
    }
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
    uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar2 & 1) == 0) {
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
      uVar9 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
      uVar3 = thunk_FUN_03f9944c(DAT_0918de98);
      _GAME_SaveGame_ABIServerLoadGameModel_RequestModel___ctor(uVar3,uVar9);
      uVar9 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar3,0);
      uVar4 = thunk_FUN_03f9944c(DAT_0918cfb8);
      _GAME_BaseGame_WebRequestModel___ctor(uVar4,uVar9,1,0xf,uVar3,0);
      *(undefined8 *)(param_1 + 0x12) = uVar4;
      thunk_FUN_03f5d7b8(param_1 + 0x12,uVar4);
      auVar11 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                          (*(undefined8 *)(param_1 + 0x12),(char)param_1[0x10],0,0);
      local_70._0_8_ = 0;
      local_70._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_70 = auVar11;
      thunk_FUN_03f5d7b8(local_70,0);
      local_d0 = local_70;
      uVar2 = FUN_0430cf0c(local_d0,DAT_0919a588);
      if ((uVar2 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_d0;
        thunk_FUN_03f5d7b8(param_1 + 0x14,0);
        FUN_0478d744(param_1 + 2,local_d0,param_1,DAT_091996a8);
        return;
      }
      goto LAB_077a430c;
    }
  }
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
LAB_077a4420:
  *param_1 = -2;
  piVar8 = param_1 + 0x12;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_03f5d7b8(piVar8,0);
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 == (long *)0x0) {
    *(undefined8 *)(param_1 + 8) = uStack_b8;
    *(undefined8 *)(param_1 + 6) = local_c0;
    *(undefined8 *)(param_1 + 0xc) = uStack_a8;
    *(undefined8 *)(param_1 + 10) = uStack_b0;
    *(undefined8 *)(param_1 + 0xe) = local_a0;
    thunk_FUN_03f5d7b8(param_1 + 8,0);
  }
  else {
    lVar5 = *(long *)(DAT_091996c8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar7 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_077a44f0;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar10,lVar5,2);
LAB_077a44f0:
    local_70._8_8_ = uStack_b8;
    local_70._0_8_ = local_c0;
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    local_50 = local_a0;
    (*(code *)*puVar6)(plVar10,local_70,puVar6[1]);
  }
  return;
}

